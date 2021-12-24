//Zadacha 16

#include <stdio.h>
#include <locale.h>

int digitdistance(int num1, int num2) {
	int res = 0;
	while (num1 != 0 && num2 != 0) {
		res -= (num1 % 10 - num2 % 10);
		num1 /= 10;
		num2 /= 10;
	}
	return res;
}

int main() {

	setlocale(LC_ALL, "Russian");

	int num1, num2;

	printf("Здравствуйте.Это программа находящая расстояние между 2умя числами(разница между каждой парой чисел). \n");
	printf("Числа должны быть одинаковой длины!\n");

	printf("Введите 1-ое число: \n");
	scanf_s("%d", &num1);
	printf("Введите 2-ое число: \n");
	scanf_s("%d", &num2);

	printf("Input ( %d , %d ) DigitDistance = %d", num1, num2, abs(digitdistance(num1, num2)));
}