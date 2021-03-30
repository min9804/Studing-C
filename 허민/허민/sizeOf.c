#include <stdio.h>
#include <conio.h>

void main()
{
	int j;
	char c;
	float d;
	double m;

	printf("int의 크기 : %d 바이트\n",sizeof(j));
	printf("char의 크기 : %d 바이트\n",sizeof(c));
	printf("float의 크기 : %d 바이트\n",sizeof(d));
	printf("double의 크기 : %d 바이트\n",sizeof(m));
	printf("long의 크기 : %d 바이트\n",sizeof(long));
	printf("short의 크기: %d 바이트\n", sizeof(short));
	printf("long long의 크기: %d 바이트\n", sizeof(long long));


	_getch();
}