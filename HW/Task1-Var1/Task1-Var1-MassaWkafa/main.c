#include <stdio.h>
#include <locale.h>
#include <math.h>
#define scale 1000000
#define rasstp 40

int main() {
	setlocale(LC_ALL, "Russian"); //���� �������� �����.

	int PDSP, PDVP, PWOD; //���� ���������� ������ ���������.
	printf("������� ��������� ��� ��� � ������ - \n");
	scanf_s("%d %d %d", &PDSP, &PDVP, &PWOD);

	int Pkol, h, d, w, t2 = 1; //���������� �������������� ����.
	float M, Vdoor, Vpol, Vkr, Vst, Vbok, t1 = 0.5, t3 = 1.5; //���������� ������������� ����.


	printf("������� ������ (180 - 220), ������ (80 - 120), ������� (50 - 90) \n");
	scanf_s("%d %d %d", &h, &w, &d);

	int control; //���������� ��� �������� ������� � ��� ������������.

	if ((h > 179 && h < 221) && (w > 79 && w < 121) && (d > 49 && d < 91))
		control = 1;
	else
		printf("������������ �������� \n"); //������ �������� �������� � ��������� ��� ����������.


	printf("���������� ������� ������� \n");
	Vdoor = (h * w * t2) / scale;
	Vkr = (w * d * t3) / scale;
	Vst = (h * w * t1) / scale;
	Vbok = (h * d * t3) / scale;

	float t4; //��� ���������� ������ ����� ����� �� �������,������ �.
	printf("������� ������� ����� \n");
	scanf_s("%f", &t4);

	Vpol = (w * d * t4) / scale;  //������ ����� ����� ����� �����.

	Pkol = h / rasstp;  //������� ���������� ����� � �����. 40 - ���������� ����� �������. rasstp - ����������,��� � �������.

	M = (Vst * PDVP) + ((Vbok * 2) * PDSP) + ((Vkr * 2) * PDSP) + ((Vdoor * 2) * PWOD) + (floor(Pkol) * Vpol * PDSP);
	// ���� ������� ���������� ����� �����.

	printf("����� ����� = %.1f", M);

	return 0;
}