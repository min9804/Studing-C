#include <stdio.h>
#include <conio.h>

void main(void)
{
	float r;
	float a;

	printf("���� �������� �Է��Ͻÿ�:");
	scanf_s("%f", &r);
	a = 3.14159 * r * r;
	printf("���� ���� : %f\n", a);

	_getch();
}