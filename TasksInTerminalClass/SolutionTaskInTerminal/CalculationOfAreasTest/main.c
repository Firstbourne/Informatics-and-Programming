#include <stdio.h>
#include <math.h>
#include <locale.h>
#define pi 3.14

	void STriang() {
		setlocale(LC_ALL, "Russian");
		double a, h, res;
		printf("����� ����� ������� ������������,������� ������ � ��� �������(h and a) - \n");
		scanf_s("%lf %lf", &h, &a);
		res = a * h * 0.5;
		printf("������� ������������ ����� - %.1lf \n", res);
	}

	void SPryam() {
		setlocale(LC_ALL, "Russian");
		int a, b, res;
		printf("����� ����� ������� ��������������,������� ��� �������(a and b) - \n");
		scanf_s("%d %d", &a, &b);
		res = a * b;
		printf("������� �������������� ����� - %d\n", res);
	}

	void SOKR() {
		setlocale(LC_ALL, "Russian");
		double r, res;
		printf("����� ����� ������� ����������,������� �� ������(r) - \n");
		scanf_s("%lf", &r);
		res = pi * r * r * 0.5;
		printf("Square is: %1.lf\n", res);
	}

	void Sraf1() {
		setlocale(LC_ALL, "Russian");
		int a, b, c;
		float res;
		printf("����� ����� ������� ��������������,������� 3 �����(a, b, c) - \n");
		scanf_s("%d %d %d", &a, &b, &c);
		res = (a + b + c) / 3;
		printf("������� �������������� ����� - %.1f\n", res);
	}

	void Sraf2() {
		setlocale(LC_ALL, "Russian");
		int a, b, c;
		float res;
		printf("����� ����� ������� �������� ���������,������� 3 �����(a, b, c) - \n");
		scanf_s("%d %d %d", &a, &b, &c);
		res = (a * a + b * b + c * c) / 3;
		printf("������� �������� ��������� ����� ����� - %.1f\n", res);
	}

	void Sraf3() {
		setlocale(LC_ALL, "Russian");
		int a, b, c;
		float res;
		printf("����� ����� ������� �������� �������,������� 3 �����(a, b, c) - \n");
		scanf_s("%d %d %d", &a, &b, &c);
		res = (abs(a) + abs(b) + abs(c)) / 3;
		printf("������� �������� ������� ����� - %.1f\n", res);
	}

	void Sraf4() {
		setlocale(LC_ALL, "Russian");
		int a, b, c;
		float res;
		printf("����� ����� ������� �������� ������,������� 3 �����(a, b, c) - \n");
		scanf_s("%d %d %d", &a, &b, &c);
		res = (sqrt(a) + sqrt(b) + sqrt(c)) / 3;
		printf("������� �������� ������ ����� ����� - %.1f\n", res);
	}

	int main() {
		setlocale(LC_ALL, "Russian");

		int var;

		printf("��������,��� ������ ���������:\n\ 1 - ������� ������������\n\ 2 - ������� ��������������\n\ 3 - ������� ����������\n\ 4 - ������� �������������� 3 �����\n\ 5 - ������� �������������� ��������� 3 �����\n\ 6 - ������� �������������� ������� 3 �����\n\ 7 - ������� �������������� ������ 3 �����\n");
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
