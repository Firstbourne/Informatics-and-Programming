#include <stdio.h>
#include <math.h>

int main() {
	int number;
	int isWork = 1;

	while (1) {
		printf("Lets invers numbers!\n");
		printf("For exit - enter 0\n");

		int isError = 0;
		do {
			if (isError)
				printf("Wrong input,try again!\n");

			printf("Input positive number: \n");
			scanf_s("%d", &number);

			if (number == 0) {
				isWork = 0;
				break;
			}

			isError = (number <= 0);

		} while (isError);

		if (isWork) {
			int result = 0;
			printf("Your number: %d\n", number);

			do {
				result = result * 10 + number % 10;
				number = number / 10;

			} while (number);

			printf("Result: %d\n", result);
		}
	}
	return 0;
}