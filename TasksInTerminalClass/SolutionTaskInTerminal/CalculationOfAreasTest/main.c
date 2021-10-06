#include <stdio.h>
#include <math.h>
#include <locale.h>
#define pi 3.14

	void STriang() {
		setlocale(LC_ALL, "Russian");
		double a, h, res;
		printf("Чтобы найти площадь треугольника,введите высоту и его сторону(h and a) - \n");
		scanf_s("%lf %lf", &h, &a);
		res = a * h * 0.5;
		printf("Площадь треугольника равна - %.1lf \n", res);
	}

	void SPryam() {
		setlocale(LC_ALL, "Russian");
		int a, b, res;
		printf("Чтобы найти площадь прямоугольника,введите его стороны(a and b) - \n");
		scanf_s("%d %d", &a, &b);
		res = a * b;
		printf("Площадь прямоугольника равна - %d\n", res);
	}

	void SOKR() {
		setlocale(LC_ALL, "Russian");
		double r, res;
		printf("Чтобы найти площадь окружности,введите ее радиус(r) - \n");
		scanf_s("%lf", &r);
		res = pi * r * r * 0.5;
		printf("Square is: %1.lf\n", res);
	}

	void Sraf1() {
		setlocale(LC_ALL, "Russian");
		int a, b, c;
		float res;
		printf("Чтобы найти среднее арифметическое,введите 3 числа(a, b, c) - \n");
		scanf_s("%d %d %d", &a, &b, &c);
		res = (a + b + c) / 3;
		printf("Среднее арифметическое равно - %.1f\n", res);
	}

	void Sraf2() {
		setlocale(LC_ALL, "Russian");
		int a, b, c;
		float res;
		printf("Чтобы найти среднее значение квадратов,введите 3 числа(a, b, c) - \n");
		scanf_s("%d %d %d", &a, &b, &c);
		res = (a * a + b * b + c * c) / 3;
		printf("Среднее значение квадратов чисел равно - %.1f\n", res);
	}

	void Sraf3() {
		setlocale(LC_ALL, "Russian");
		int a, b, c;
		float res;
		printf("Чтобы найти среднее значение модулей,введите 3 числа(a, b, c) - \n");
		scanf_s("%d %d %d", &a, &b, &c);
		res = (abs(a) + abs(b) + abs(c)) / 3;
		printf("Среднее значение модулей равно - %.1f\n", res);
	}

	void Sraf4() {
		setlocale(LC_ALL, "Russian");
		int a, b, c;
		float res;
		printf("Чтобы найти среднее значение корней,введите 3 числа(a, b, c) - \n");
		scanf_s("%d %d %d", &a, &b, &c);
		res = (sqrt(a) + sqrt(b) + sqrt(c)) / 3;
		printf("Среднее значение корней чисел равно - %.1f\n", res);
	}

	int main() {
		setlocale(LC_ALL, "Russian");

		int var;

		printf("Выберите,что хотите посчитать:\n\ 1 - Площадь треугольника\n\ 2 - Площадь прямоугольника\n\ 3 - Площадь окружности\n\ 4 - Среднее арифметическое 3 чисел\n\ 5 - Среднее арифметическое квадратов 3 чисел\n\ 6 - Среднее арифметическое модулей 3 чисел\n\ 7 - Среднее арифметическое корней 3 чисел\n");
		scanf_s("%d", &var);
		switch (var) {
		case 1:
			STriang();
			break;
		case 2:
			SPryam();
			break;
		case 3:
			SOKR();
			break;
		case 4:
			Sraf1();
			break;
		case 5:
			Sraf2();
			break;
		case 6:
			Sraf3();
			break;
		case 7:
			Sraf4();
			break;
		default:
			break;
		}
		return 0;
	}
