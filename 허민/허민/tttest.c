#include <stdio.h>
#include <conio.h>

void main(void)
{
	float x, y, z;

	printf("�Ѻ��� ���� �Է�:\n");
	scanf_s("%f,", &x);
	y = x * 4;
	z = x * x;

	printf(" �� ���� %f�� ���簢���� �ѷ��� %f, ������ %f", x, y, z);

	_getch();
}