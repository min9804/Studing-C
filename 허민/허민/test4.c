#include <stdio.h>
#include <conio.h>


void main()
{
	float x, y;

	float
		sum, p;

	printf("수학점수 입력:");
	scanf_s("%f", &x);
	printf("영어점수 입력:");
	scanf_s("%f", &y);

	sum = x + y;

	p = sum / 2;

	printf("합 : %f점", sum);
	printf("  평균: %f점", p);
	 
	_getch();
}