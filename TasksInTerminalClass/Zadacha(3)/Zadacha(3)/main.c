// Zadacha 19

#include <stdio.h>
#include <locale.h>

int MassivCheck(int* array1,int* array2, int N) {

	int flag = 0, elements = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (array1[i] == array2[j]) 
				flag = 1;
		}
			if (flag == 0) {
				array2[elements] = array1[i];
				elements++;
			}
			else flag = 0;
	}
	return elements;
}


int main() {

	setlocale(LC_ALL, "Russian");

	int* array1;
	int* array2;
	int i, N;
	

	printf("«дравствуйте!¬ведите размер массива: \n");
	scanf_s("%d", &N);

	array1 = (int*)malloc(N * sizeof(int));
	array2 = (int*)malloc(N * sizeof(int));

	printf("¬ведите элементы массива: \n");

	for (i = 0; i < N; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &array1[i]);
	}

	
	printf("Result: [");
	N = MassivCheck(array1, array2, N);
	array2 = realloc(array2,N * sizeof(int));
	for (i = 0; i < N; i++) {
		printf(" %d ", array2[i]);
	}
	printf("]");

	free(array1);
	free(array2);

	return 0;
}