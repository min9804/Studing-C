#include <stdio.h>
#include <conio.h>

void main(void)
{
	float x;

	
	printf("실수를 하나 입력 하세요\n");
	scanf_s("%f", &x);
	printf("%f의 두배는 %f입니다.", x, x * 2);

	_getch();
}