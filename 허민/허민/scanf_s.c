#include <stdio.h>
#include <conio.h>

void main(void)
{
	int x, y;

	printf("ù ��° ���ڸ� �Է� �ϼ���.\n");
	scanf_s("%d", &x);
	printf("�� ��° ���ڸ� �Է� �ϼ���.\n");
	scanf_s("%d", &y);
	printf("%d�� %d�� ���� %d�Դϴ�.\n", x, y, x + y);

	_getch();
}