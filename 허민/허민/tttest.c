#include <stdio.h>
#include <conio.h>

void main(void)
{
	float x, y, z;

	printf("한변의 길이 입력:\n");
	scanf_s("%f,", &x);
	y = x * 4;
	z = x * x;

	printf(" 한 변이 %f인 정사각형의 둘레는 %f, 면적은 %f", x, y, z);

	_getch();
}