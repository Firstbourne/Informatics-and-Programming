#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>

struct OddandEven {
	int Odd;
	int Even;
};

struct OddandEven Sum(int* array, int N) {
	struct OddandEven elements;
	elements.Odd = 0;
	elements.Even = 0;
	for (int i = 0; i < N; i++) {
		if (array[i] % 2) {
			elements.Odd += array[i];
		}
		else elements.Even += array[i];
	}
	return elements;
}

int main() {

	setlocale(LC_ALL, "Russian");

	struct OddandEven result;
	int *array;
	int i, N;

	printf("¬ведите размер массива: \n");
	scanf_s("%d", &N);

	array = (int*)malloc(N * sizeof(int));

	printf("¬ведите элементы массива: \n");

	for (i = 0; i < N; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &array[i]);
	}
	result = Sum(array, N);
	printf("[ %d , %d ]\n", result.Even, result.Odd);
}