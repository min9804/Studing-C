#include <stdio.h>
#include <conio.h>
#include <limits.h>

void main()
{
	short s = SHRT_MAX;
	unsigned short u = USHRT_MAX;
	s = s + 1;
	u = u + 11;
	printf("s = %d u = %d\n", s, u);

	_getch();
}