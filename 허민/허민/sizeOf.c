#include <stdio.h>
#include <conio.h>

void main()
{
	int j;
	char c;
	float d;
	double m;

	printf("int�� ũ�� : %d ����Ʈ\n",sizeof(j));
	printf("char�� ũ�� : %d ����Ʈ\n",sizeof(c));
	printf("float�� ũ�� : %d ����Ʈ\n",sizeof(d));
	printf("double�� ũ�� : %d ����Ʈ\n",sizeof(m));
	printf("long�� ũ�� : %d ����Ʈ\n",sizeof(long));
	printf("short�� ũ��: %d ����Ʈ\n", sizeof(short));
	printf("long long�� ũ��: %d ����Ʈ\n", sizeof(long long));


	_getch();
}