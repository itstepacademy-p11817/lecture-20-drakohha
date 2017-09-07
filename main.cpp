#include <iostream>
#include <time.h>
#include <stdlib.h>

void fun_sign(int* p) {
	if (*p > 0) {
		printf("Znak = '+' \n");

	}
	else {
		printf("Znak = '-' \n");
	}
}

void fun_replace(int* p_1, int* p_2) {
	int t = 0;
	t = *p_1;
	*p_1 = *p_2;
	*p_2 = t;
}

void fun_summa(int* p,int* size,int* sum) {
	for (int i = 0; i < *size; i++) {
		*sum = *sum + p[i];
	}
}

int main() {
	int flag_menu = 1;
	srand(time(NULL));
	do {
		printf("Vvedite nomer zadaci : 1-7, 0-vuhod \n");
		std::cin >> flag_menu;
		if (flag_menu == 1) {
			int number_1 = 0;
			int number_2 = 0;
			int* p_1 = NULL;
			int* p_2 = NULL;
			std::cout << "\n" << "Zadaca nomer 1" << "\n" << "Vvedite number_1 : ";
			std::cin >> number_1;
			std::cout << "\n" << "Vvedite number_2 : ";
			std::cin >> number_2;
			p_1 = &number_1;
			p_2 = &number_2;
			if (*(p_1) > *(p_2)) {
				std::cout << "\n" << "Naibolhoe 4islo = " << *(p_1) <<"\n";
			
			}
			else {
				std::cout << "\n" << "Naibolhoe 4islo = " << *(p_2)<<"\n" ;
			}
		}

		if (flag_menu == 2) {
			std::cout << "\n" << "Zadaca nomer 2 :" << "\n" << "Vvedite 4islo = ";
			int number_1 = 0;
			std::cin >> number_1;
			int* p_1 = NULL;
			p_1 = &number_1;
			fun_sign(p_1);
		}

		if (flag_menu == 3) {
			std::cout << "\n" << "Zadaca nomer 3 :" << "\n" << "Vvedite nomber_1 = ";
			int number_1 = 0;
			int number_2 = 0;
			int* p_1 = NULL;
			int* p_2 = NULL;

			std::cin >> number_1;
			std::cout << "\n" << "Vvedite nomber_2 = ";
			std::cin >> number_2;
			p_1 = &number_1;
			p_2 = &number_2;

			fun_replace(p_1, p_2);
			std::cout << "\n" << "Teper number_1 = " << number_1 << "\n" << "A number_2= " << number_2 << "\n";

		}

		if (flag_menu == 4) {
			std::cout << "\n" << "Zadaca nomer 4 :" << "\n";
			int ind = 0;
			double summa = 0.0;
			double summa_2 = 0.0;
			double* p_1 = NULL;
			double* p_2 = NULL;
			p_1 = &summa;
			p_2 = &summa_2;
			do {
				std::cout << "\n" << "Vvedite nomer operacii : " << "\n" << "1- vvesti 4islo " << "\n" << "2- Vupolnit slohenie " << "\n" << "3-vupolnitb vu4itanie " << "\n";
				std::cout << "4-vupolnit ymnohenie" << "\n" << "5-vupolnit delenie " << "\n" << "0-vuhod" << "\n";
				std::cout << "Tekyhie zna4enie = " << *p_1 <<"\n";
				std::cin >> ind;
				if (ind == 1) {
					std::cout << "\n" << "Vvedite 4islo = ";
					std::cin >> *p_1;
				}
				if (ind == 2) {
					std::cout << "\n" << "Vvedite 4islo = ";
					std::cin >> *p_2;
					*p_1 = *p_1 + *p_2;
				}
				if (ind == 3) {
					std::cout << "\n" << "Vvedite 4islo = ";
					std::cin >> *p_2;
					*p_1 = *p_1 - *p_2;
				}
				if (ind == 4) {
					std::cout << "\n" << "Vvedite 4islo = ";
					std::cin >> *p_2;
					*p_1 = *p_1 * *p_2;
				}
				if (ind == 5) {
					std::cout << "\n" << "Vvedite 4islo = ";
					std::cin >> *p_2;
					*p_1 = *p_1 / *p_2;
				}
			
			
			
			
			} while (ind != 0);
			


		}
		if (flag_menu == 5) {
			std::cout << "\n" << "Zadaca nomer 5 " << "\n" << "Vveden proizvolniu massiv : " <<"\n";
			int array[10] = { 0 };
			for (int i = 0; i < 10; i++) {
				array[i] = rand() % 9;
				std::cout << array[i] <<" ";
			}
			std::cout << "\n";
			int* p = NULL;
			int* p_1 = NULL;
			int sum = 0;
			p_1 = &sum;
			p = &array[0];
			int size = 10;
			int* p_2 = NULL;
			p_2 = &size;

			fun_summa(p, p_2, p_1);

			std::cout << "\n" << "Summa elementov ravna =" << *p_1 <<"\n";

		}

		if (flag_menu == 6) {
			std::cout << "\n" << "Zadaca nomer 6" << "\n" << "Vvedeni dva massiva odin polnio vtoroi pustoi :" << "\n";
			int array[10] = { 0 };
			for (int i = 0; i < 10; i++) {
				array[i] = rand() % 9;
				std::cout << array[i] << " ";
			}
			std::cout << "\n";
			int array_2[10] = { 0 };
			for (int i = 0; i < 10; i++) {
				std::cout << array_2[i] << " ";
			}
			std::cout << "\n";

			int* p = NULL;
			int* p_2 = NULL;

			p = &array[0];
			p_2 = &array_2[0];

			for (int i = 0; i < 10; i++) {
				p_2[i] = p[i];
			}

			std::cout << "\n" << "Konecnui rezultat posle kopirovanui9 :" << "\n";
			for (int i = 0; i < 10; i++) {
				std::cout << array_2[i] << " ";
			}
			std::cout << "\n";

		}
		if (flag_menu == 7) {
			std::cout << "\n" << "Zadaca nomer 7 :" << "\n" << "Dan ishodii massiv :" << "\n";
			int array[10] = { 0 };
			for (int i = 0; i < 10; i++) {
				array[i] = rand() % 9;
				std::cout << array[i] << " ";
			}
			std::cout << "\n";

			std::cout << "\n" << "Men9em por9dok elementov na protivopoloheni :" << "\n";

			int* p = NULL;
			int* p_1 = NULL;
			int t = 0;
			p = &array[0];
			p_1 = &t;

			for (int i = 0; i < 5; i++) {
				*p_1=*(p+9-i);
				*(p+9-i)=*(p+i);
				*(p + i) = *p_1;


			}

			for (int i = 0; i < 10; i++) {
				std::cout << array[i] << " ";
			}
			std::cout << "\n";

		}
	
	
	
	
	} while (flag_menu != 0);


}