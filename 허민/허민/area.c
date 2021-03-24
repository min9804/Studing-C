#include <stdio.h>
#include <conio.h>

void main(void)
{
	float r;
	float a;

	printf("원의 반지름을 입력하시오:");
	scanf_s("%f", &r);
	a = 3.14159 * r * r;
	printf("원의 면적 : %f\n", a);

	_getch();
}