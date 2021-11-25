#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 10

char mouses[][30] = { {"Zowie EC2-A"}, {"Zowie FK-1"}, {"Logitech G502"}, {"HyperX Pulsfire RGB"}, {"Razer Deathadder"}, {"Steelseries Rival 5"}, {"logitech PRO X Superlight"}, {"Razer Basilisk"}, {"Steelseries Rival 600"}, {"A4tech Bloody V7"} };
int price[] = { 5599, 7099, 6299, 8399, 10199, 4499, 13899, 9699, 5099, 2299 };
int barcode[SIZE];
int discount[SIZE];
int check[SIZE];
int count[SIZE];


int main() {
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	int isscanned = 0;
	int scode;
	int Menu = 0;
	int scannedproduct;
	int addedproduct = 0;
	float totalprice;

	for (int i = 0; i < SIZE; i++) { //��������� �����-����� � ������.
		barcode[i] = rand() % 8999 + 1000;
		discount[i] = rand() % 49 + 1;
		check[i] = 0;
		//printf(" %d ", barcode[i]);
		//printf(" %d ", discount[i]);
	}


	while (1) {

		printf("\n ������������,�������� ��������: \n");
		printf("\n ������� ���������� � ������ ������ - '0'\n ������������� ����� - '1'\n ���������� ���������� � ������ - '2'\n �������� ����� � ��� - '3'\n ������������ ��� ������� - '4'\n ����� �� ���� - '9'\n");
		scanf_s("%d", &Menu);

		if (Menu == 9) return exit;

		switch (Menu) {
		case 0:
			for (int i = 0; i < SIZE; i++) {
				printf("\n ��� ������: %d | ������������ ������: %s | ���� ������: %d (������) | ������ �� �����: %d%% |", barcode[i], mouses[i], price[i], discount[i]);
			}
			break;

		case 1:
			isscanned = 0;
			while (isscanned == 0) {
				int wrong = 1;
				printf("������� ��� ������: \n");
				scanf_s("%d", &scode);
				for (int i = 0; i < SIZE; i++) {
					if (scode == barcode[i]) {
						printf("����� ������. \n");
						isscanned = 1;
						//printf("%d", i); scannedproduct = index.
						scannedproduct = i;
						check[scannedproduct]++;
						wrong = 0;
					}
				}
				if (wrong) {
					isscanned = 0;
					printf("�� ������� ���� ����� �� ������,���������� ������.\n");
				}
			}
			break;

		case 2:
			if (isscanned == 1) {
				printf("\n ��������� ��������������� ����� - ��� ������: %d \n", barcode[scannedproduct]);
				printf("\n �������� - %s | ���� ������: %d | ������ �� �����: %d%% \n", mouses[scannedproduct], price[scannedproduct], discount[scannedproduct]);
			}
			if (isscanned == 0)
			printf("� ��� ��� ��������������� �������!\n");
			break;

		case 3:
			if (isscanned != 0) {
				addedproduct = 1;
				printf("�� �������� ����� � ���.\n");
			}
			else {
				printf("� ��� ��� ��������������� �������!\n");
			}
			break;

		case 4:
			if (addedproduct == 1) {

				for (int i = 0; i < SIZE; i++) {
					if (check[i] != 0) {

						totalprice = (price[i] - price[i] * discount[i] / 100) * check[i];
						printf("\n������ � ���� - %s | ���������� ������� - %d | ���� - %d | ������ - %d%% | ���� �� ������� - %.2f | \n", mouses[i], check[i], price[i] * check[i], discount[i], totalprice);															
					}
				}																	
			}
		}
	}
}
