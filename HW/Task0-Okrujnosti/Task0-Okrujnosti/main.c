#include <stdio.h>
#include <math.h>     //Введём нужные для работы библиотеки
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int x, x1, y, y1, r, r1, malok = 0, bolok = 0;   //Введеём переменные для работы, malok and bolok = малая и большая окружность.
	printf("Введите координаты и радиус первой окружности - \n");
	scanf_s("%d %d %d", &x, &y, &r);
	printf("Введите координаты и радиус второй окружности - \n");
	scanf_s("%d %d %d", &x1, &y1, &r1);  //Вывод коментариев и ручной ввод значений переменных

	if (r > r1) {
		bolok = r;
		malok = r1;
	}                   //Определяем большую и маленькую окружность.
	if (r < r1) {
		bolok = r1;
		malok = r;
	}
	if (r == r1) {
		printf("Окружности равны \n");
	}

	float res;  //Введём еще несколько дополнительных переменных
	res = sqrt(pow(x - x1, 2) + pow(y - y1, 2));  //Нашли нужные значения по формулам

	if (res == (r + r1)) {
		printf("Окружности касаются \n");
	}
	else if (res < (r + r1) && (res > malok)) {
		printf("Окружности пересекаются \n");
	}
	else if (res > (r + r1) && (res > bolok)) {            //Теперь выведем подходящий вариант.
		printf("Окружности не взаимодействуют \n");
	}
	else if ((res + malok) < bolok) {
		printf("Окружность расположена внутри другой окружности \n");
	}
	else if ((res + malok) == bolok) {
		printf("Внутреннее касание \n");
	}
	return 0;
}