#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");

	int mn1 = 1, mn2 = 5, mn3 = 10, mn4 = 25, kol1 = 0, kol2 = 0, kol3 = 0, kol4 = 0, price; //mn - ������ ���������. kol -  ����� �������,������� ����� ����� ������� ��������.

	printf("������� ��������� �� ������ �������� - \n");
	scanf_s("%d", &price);

	while (price > 0) {
		while (price >= mn4) {
			kol4 = kol4 + 1;
			price = price - mn4;
		}
		while (price >= mn3) {
			kol3 = kol3 + 1;
			price = price - mn3;
		}
		while (price >= mn2) {
			kol2 = kol2 + 1;
			price = price - mn2;
		}
		while (price >= mn1) {
			kol1 = kol1 + 1;
			price = price - mn1;
		}
	}
	printf("��� ������ ������,��� ����������� ���� �������� ������ - \n");
	printf(" ��������� 25 -  ��������� 10 -  ��������� 5 -  ��������� 1 - \n"); 
	printf("%d  %d  %d  %d", kol4, kol3, kol2, kol1);
	return 0;

}