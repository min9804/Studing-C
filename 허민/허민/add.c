#include <stdio.h>
#include <conio.h>

int a, b;

int add()
{
	return(a + b);
}

void main()
{
	int sum;
	a = 2;
	b = 4;
	sum = add();
	printf("���� ���� %d\n", sum);

	_getch();
}