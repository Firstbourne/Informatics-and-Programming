//Bakhtiarov A. V. 

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#define SIZE 10

int main() {
	setlocale(LC_ALL, "russian");

	int Massiv[SIZE];
	int res1 = 1;
	int res2 = 1;
	int res3 = 1;
	int ind1, ind2;
	int temp;

	printf("��������� ������: \n");
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &Massiv[i]);
	}

	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			res1 *= Massiv[i];
		}
		else {
			res2 *= Massiv[i];
		}
		if (abs(Massiv[i]) % 2 != 0) {
			res3 *= Massiv[i];
		}
	}
	printf("\n ������������ �������� ��������� �������: %d\n ������������ ��������� ������� � ��������� ��������: %d\n ������������ ��������� ������� �������� �� ��������: %d\n\n", res1, res2, res3);

	printf("����������� ������:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", Massiv[i]);
	}

	printf("������� ������� ��������� ��� ����� �������\n");
	scanf_s("%d %d", &ind1, &ind2);

	temp = Massiv[ind2];
	Massiv[ind2] = Massiv[ind1];
	Massiv[ind1] = temp;

	printf("�������������� ������:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", Massiv[i]);
	}

	temp = Massiv[ind2];
	Massiv[ind2] = Massiv[ind1];
	Massiv[ind1] = temp;

	printf("\n����������� ������:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", Massiv[i]);
	}

	for (int i = 0; i < SIZE / 2; i++) {
		temp = Massiv[i];
		Massiv[i] = Massiv[i + SIZE / 2];
		Massiv[i + SIZE / 2] = temp;
	}

	printf("\n������ ����� ����� �������:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", Massiv[i]);
	}

	return 0;
}



