#include <stdio.h>

int main() {
	int a, h;

	printf("Input parameters of triangle \n   - a = ");
	scanf_s("%d", &a);
	printf("   - h = ");
	scanf_s("%d", &h);

	float S;
	S = 0.5 * a * h;

	printf("Result: S = %.2f\n", S);

	return 0;
}