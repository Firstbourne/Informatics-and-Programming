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
	char ������ = '>';
	char ������ = '<';
	char ����� = '=';
	printf("�������� ����� (1 ��� 2) \n");
	scanf_s("%d", &rej);
	if (rej == 1) {
		printf("�� ������� ����� 1 \n");
		flag = 1;
	}
	else if (rej == 2) {
		printf("�� ������� ����� 2 \n");
		flag = 2;
	}
	else {
		printf("��������� ����� �� ���������� \n");
		flag = 0;
	}


	if (flag == 1) {
		printf("�������� ����� �� 1 �� 1000 \n");
		srand(time(NULL));
		c = rand() % 1000 + 1;
		do {
			printf("������� ��� ����� \n");
			scanf_s("%d", &x);
			if (x < c) {
				printf("���������� ����� ������ ������ \n");
				p = p + 1;
			}
			else if (x > c) {
				printf("���������� ����� ������ ������ \n");
				p = p + 1;
			}
			else if (x = c) {
				printf("�� �������,������!���� ����� ������� = %d", p);
				p = p + 0;
				w = w + 1;
			}
		} while (w != 1);
	}

	if (flag == 2) {
		printf("��������� ����� \n");
		scanf_s("%d", &x);
		if (x >= 0 && x <= 1000) {
			while (w != 1) {
				srand(time(NULL));
				c = rand() % (max - min + 1) + min;
				printf("�� �������� ��� ����� = %d ?\n", c);
				scanf_s("%c", &podskaz , 1);
				podskaz = getchar();

				if (podskaz == ������) {
					min = c;
					p = p + 1;
				}
				else if (podskaz == ������) {
					max = c;
					p = p + 1;
				}
				else if (podskaz == �����) {
					w = 1;
					p = p + 0;
					printf("��������� ������ �����.������������� ������� = %d", p);
				}
				
			}
		}
		else {
			printf("������ �������� �����");
		}

	}



	return 0;
}



	
