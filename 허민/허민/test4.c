#include <stdio.h>
#include <conio.h>


void main()
{
	float x, y;

	float
		sum, p;

	printf("�������� �Է�:");
	scanf_s("%f", &x);
	printf("�������� �Է�:");
	scanf_s("%f", &y);

	sum = x + y;

	p = sum / 2;

	printf("�� : %f��", sum);
	printf("  ���: %f��", p);
	 
	_getch();
}