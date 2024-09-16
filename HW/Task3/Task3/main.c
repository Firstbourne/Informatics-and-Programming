#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

	int Gen_Num_Check(int* massiv, int size, int compos) {  //Проверка сгенерированного числа на повторяющиеся элементы.
	int flag = 0;
		for (int i = 0; i < size; i++) {
			if (compos == massiv[i])
				flag = 1;
		}
		return flag;
}

int Generate_Number(int n) {  //Генерация числа компьютером и его дальнейшая проверка на корректность ( 0 элемент не равен 0).
	int num, res = 0;
	int *massiv = 0;

	massiv = malloc(sizeof(int) * n);

	while (n > 0) {
		srand(time(0));
		num = rand() % 10;
		if((Gen_Num_Check(massiv, n, num) == 0) && (massiv[0] != 0)) {
			res += num * pow(10, n - 1);
			--n;
			massiv[n - 1] = num;
		}
	}
	return res;
}

int Input_Num_Check(int n) { //Проверка вводимой игроком длины числа,которое компьютер будет загадывать.
	int IsCorrect = 0;
	if (n >= 2 && 5 >= n) {
		IsCorrect = 1;
	} 
	else {
		IsCorrect = 0;
		printf("Вы ввели недопустимое число,повторите попытку.\n");
	}
	return IsCorrect;
}



int main() { //Основная функция.
	setlocale(LC_ALL, "Russian");

	int isFinished = 0;
	int cows, bulls;
	int n = 0;
	int COMnumber = 0;
	printf("Введите длину числа (n = 2 - 5) \n");
	scanf_s("%d", &n);

	while (Input_Num_Check(n) != 1) {
		printf("Введите длину числа (n = 2 - 5) \n");
		scanf_s("%d", &n);
	}

	COMnumber = Generate_Number(n);

		int USRnumber;
		int* array1 = 0;
		int* array2 = 0;
		array1 = malloc(sizeof(int) * n);
		array2 = malloc(sizeof(int) * n);

		printf("Введите ваше число - \n");
		scanf_s("%d", &USRnumber);

		for (int i = 0; i < n; i++) {
			array1[n - i - 1] = COMnumber % 10;
			array2[n - i - 1] = USRnumber % 10;
			COMnumber /= 10;
			USRnumber /= 10;
		}

		while (isFinished == 0) {
			cows = 0, bulls = 0;
	
			for (int i = 0; i < n; i++) {
				for (int k = 0; k < n; k++) {
					if (array2[i] == array1[k]) {
						if (i == k) {
							bulls++;
							break;
						}
						else {
							cows++;
							break;
						}
					}
				}
			}

			if (bulls == n) {
				printf("Вы угадали число");
				isFinished = 1;
				continue;
			}
			else {
				printf("Коров - %d, Быков - %d\n", cows, bulls);
			}
			printf("Введите ваше число. \n");
			scanf_s("%d", &USRnumber);
			for (int i = 0; i < n; i++) {
				array2[n - i - 1] = USRnumber % 10;
				USRnumber /= 10;
			}
		}
}
