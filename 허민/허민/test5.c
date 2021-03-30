#include <stdio.h>
#include <conio.h>
#define PI 3.14159

void main()
{
	float x;
	printf("원의 반지름:");
	scanf_s("%f", &x);


	printf("반지름 %f인 원의 면적 : %f 둘레 : %f", x, PI*x*x, 2 * PI*x);

	_getch();
}