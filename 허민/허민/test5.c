#include <stdio.h>
#include <conio.h>
#define PI 3.14159

void main()
{
	float x;
	printf("���� ������:");
	scanf_s("%f", &x);


	printf("������ %f�� ���� ���� : %f �ѷ� : %f", x, PI*x*x, 2 * PI*x);

	_getch();
}