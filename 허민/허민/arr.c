#include <stdio.h>
#include <conio.h>

void main(void)
{
	char s[20];
	printf("�̸� �Է�: ");
	scanf_s("%s", &s, sizeof(s));
	printf("���� �̸��� %s �Դϴ�.\n", s);

	_getch();
}