#include <stdio.h> //printf함수를 불러오기 위해 include.
#include <conio.h> //_getch함수를 불러오기 위해 inlcude.

void main(void) //return값이 없는 함수이므로 void형 main함수 선언.
{
	printf("Hello\nC\nProgrammers!\n"); 
	//printf함수를 한번만 호출하고 여러번 줄바꿈을 하기위해 \n를 여러번 입력.

	_getch(); 

	//사용자가 키보드를 누를때까지 기다리는 _getch함수 호출.
}