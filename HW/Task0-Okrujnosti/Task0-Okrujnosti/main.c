#include <stdio.h>
#include <math.h>     //����� ������ ��� ������ ����������
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int x, x1, y, y1, r, r1, malok = 0, bolok = 0;   //������ ���������� ��� ������, malok and bolok = ����� � ������� ����������.
	printf("������� ���������� � ������ ������ ���������� - \n");
	scanf_s("%d %d %d", &x, &y, &r);
	printf("������� ���������� � ������ ������ ���������� - \n");
	scanf_s("%d %d %d", &x1, &y1, &r1);  //����� ����������� � ������ ���� �������� ����������

	if (r > r1) {
		bolok = r;
		malok = r1;
	}                   //���������� ������� � ��������� ����������.
	if (r < r1) {
		bolok = r1;
		malok = r;
	}
	if (r == r1) {
		printf("���������� ����� \n");
	}

	float res;  //����� ��� ��������� �������������� ����������
	res = sqrt(pow(x - x1, 2) + pow(y - y1, 2));  //����� ������ �������� �� ��������

	if (res == (r + r1)) {
		printf("���������� �������� \n");
	}
	else if (res < (r + r1) && (res > malok)) {
		printf("���������� ������������ \n");
	}
	else if (res > (r + r1) && (res > bolok)) {            //������ ������� ���������� �������.
		printf("���������� �� ��������������� \n");
	}
	else if ((res + malok) < bolok) {
		printf("���������� ����������� ������ ������ ���������� \n");
	}
	else if ((res + malok) == bolok) {
		printf("���������� ������� \n");
	}
	return 0;
}