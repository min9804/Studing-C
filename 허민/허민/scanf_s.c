#include <stdio.h>
#include <conio.h>

void main(void)
{
	int x, y;

	printf("첫 번째 숫자를 입력 하세요.\n");
	scanf_s("%d", &x);
	printf("두 번째 숫자를 입력 하세요.\n");
	scanf_s("%d", &y);
	printf("%d와 %d의 합은 %d입니다.\n", x, y, x + y);

	_getch();
}