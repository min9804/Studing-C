#include <stdio.h>
#include <conio.h>

void main(void)
{
	char s[20];
	printf("이름 입력: ");
	scanf_s("%s", &s, sizeof(s));
	printf("나의 이름은 %s 입니다.\n", s);

	_getch();
}