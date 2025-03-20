#pragma once



/*구조체
* 
목표 아이템을 직접 정의해서 사용한다
정수 ,실수, 글자 표현하는 방법
아이템을 구현한다 ,이름 수량번호 타입
아이템이 많이 존재한다
하나의 배열로 모든 아이템을 표현할 수 있다
아이템을 정의해서 정의한 데이터를 배열로 표현한다
*/
/*구조체
* struct: 사용자가 직접 정의한 자료형
* 왜 데이터를 직접 정의할까
* 
* 2차원 좌표 int x좌표 int y좌표
* int x
* int y
* 항상 2개의 좌표로 이루어저 있다 우리가 직접 좌표를 의미하는 자료형을 만들수 있을까
*/

/*
	struct 이름
	{
		int xPos
		int yPos
	}

	1.구조체 표현 방법 struct 이름(int x, int y, int z)
	2.구조체 안에 구조체를 넣을수 있을까  원: 원점과 반지름  원의 넓이, 호의길이
*/
#include<stdio.h>

typedef struct Pos
{
	int xPos;
	int yPos;
}Pos;

/*
* 구조체를  선언할때마다 struct 선언하기 귀찮다
* typedef struct 타입의 이름을 생략 할 수 있다

*/

/*
* 구조체를 이용해서 함수를 만드는것
*/
typedef struct Circle //원좀과 반지름으로 구성된 도형이다
{
	Pos origin;
	double radius;
}Circle;


void StructExample();

void CalculateCircleInfo(Circle Circle);

//플레이어의 정보를 출력하는 함수를 만들어 보세요

typedef struct 
{
	char* playerName;
	Pos playerPos;
	int playerhp ;

}player;

void ShowPlayerCurrentPos(player player);