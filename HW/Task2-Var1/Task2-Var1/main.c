#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	setlocale(LC_ALL, "Russian");

	int rej, flag = 0;
	int c, x, p = 1, w = 0, diap = 1000, min = 0, max = 1000;
	char podskaz;
	char Больше = '>';
	char Меньше = '<';
	char Равно = '=';
	printf("Выберите режим (1 или 2) \n");
	scanf_s("%d", &rej);
	if (rej == 1) {
		printf("Вы выбрали режим 1 \n");
		flag = 1;
	}
	else if (rej == 2) {
		printf("Вы выбрали режим 2 \n");
		flag = 2;
	}
	else {
		printf("Выбранный режим не существует \n");
		flag = 0;
	}


	if (flag == 1) {
		printf("Угадайте число от 1 до 1000 \n");
		srand(time(NULL));
		c = rand() % 1000 + 1;
		do {
			printf("Введите своё число \n");
			scanf_s("%d", &x);
			if (x < c) {
				printf("Загаданное число больше вашего \n");
				p = p + 1;
			}
			else if (x > c) {
				printf("Загаданное число меньше вышего \n");
				p = p + 1;
			}
			else if (x = c) {
				printf("Вы угадали,победа!Ваше число попыток = %d", p);
				p = p + 0;
				w = w + 1;
			}
		} while (w != 1);
	}

	if (flag == 2) {
		printf("Загадайте число \n");
		scanf_s("%d", &x);
		if (x >= 0 && x <= 1000) {
			while (w != 1) {
				srand(time(NULL));
				c = rand() % (max - min + 1) + min;
				printf("Вы загадали это число = %d ?\n", c);
				scanf_s("%c", &podskaz , 1);
				podskaz = getchar();

				if (podskaz == Больше) {
					min = c;
					p = p + 1;
				}
				else if (podskaz == Меньше) {
					max = c;
					p = p + 1;
				}
				else if (podskaz == Равно) {
					w = 1;
					p = p + 0;
					printf("Компьютер угадал число.Потребовалось попыток = %d", p);
				}
				
			}
		}
		else {
			printf("Нельзя загадать число");
		}

	}



	return 0;
}



	
