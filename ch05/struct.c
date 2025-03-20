#include "struct.h"

void StructExample()
{
	//플레이어의 정보를 만들어 본다
	
	struct Pos playerpos = { 1,1 };

	//플레이어의 좌표를 출력해주세요  
	//.접근연산자 내부의 데이터에 접촉할 수 있다
	printf("(%d ,%d)", playerpos.xPos,playerpos.yPos);

	Pos origin = { 0,0 };
	struct Circle myCircle = { origin,2.5 };
	//printf("원점 : %d, %d, 반지름% lf", );
	CalculateCircleInfo(myCircle);
}


void CalculateCircleInfo(Circle Circle)
{
	printf("호의 길이 : %lf\n", 2 * 3.14*Circle.radius);
	printf("원의 넓이 : %lf\n", 0.5 * 3.14 * Circle.radius * Circle.radius);
	printf("원점의 위치 : %d %d\n", Circle.origin.xPos, Circle.origin.yPos);
}

void ShowPlayerCurrentPos(player player)
{
	printf("체력 %d",player.playerhp);
	printf("이름 %s", player.playerName);
}
