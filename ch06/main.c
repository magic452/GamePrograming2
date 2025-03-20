
/*
* 2025-3-20
* 구조체와 포인터
* 
* 
* 구조체를 선언한 TYPE:PLAYER
* 
* 타입이름*  이름
* Player* PLayerptr
* 
* 
* 구조체 포인터의 값을 접근하는 방법
* 
* void ShowlayerInfo(*player playerptr)
* 1. playerptr 주소이기 때문에 값에 접근을 해야한다 역참조 연산자를 사용
* 2. 구조체의 변수이자 데이터에 접근하는 연산자 (*playerptr).playerName
* 3.
* 4. 화살표 연산자 : 구조체의 주소 변수-> (*playerptr.접근할데이터
* (*playerptr).playerName
* 
*/


#include<stdio.h>
#include"Structpoint.h"
#include"GameUI.h"
int main()
{
	GameStart();
	//ch06Example();
}