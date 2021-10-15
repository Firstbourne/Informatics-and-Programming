#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>

int main() {

	setlocale(LC_ALL, "Russian");

	int N, A, K;
	int* Massivs;

	printf("������� ������ ������� - \n");
	scanf_s("%d", &N);
	printf("������� �������� - \n");
	scanf_s("%d", &A);

	Massivs = (int)malloc(sizeof(int) * N);
	printf("��� ����������� ������: \n");

	for ( int i = 0; i < N; i++) {
		Massivs[i] = rand() % (2 * A - 1) - A;
		printf(" %d ", Massivs[i]);
	}

	printf("\n������� �����,�� ������� ��������� ������ �� ������ �������� ������ - \n");
	scanf_s("%d", &K);

	for (int i = 0; i < K; i++) {
		int sdv = Massivs[N - 1];
		for (int h = N - 1; h > -1; h--) {
			Massivs[h] = Massivs[h - 1];
		}
		Massivs[0] = sdv;
	}

	printf("��������� ������ - \n");
	for (int i = 0; i < N; i++) {
		printf(" %d ", Massivs[i]);
	}

	for (int i = 0; i < N / 2; i++) {
		int per = Massivs[i];
		Massivs[i] = Massivs[N - i - 1];
		Massivs[N - i - 1] = per;
	}

	printf("\n�������� ��������� - \n");
	for (int i = 0; i < N; i++) {
		printf(" %d ", Massivs[i]);
	}

	return 0;
}