#include "struct.h"

void StructExample()
{
	//�÷��̾��� ������ ����� ����
	
	struct Pos playerpos = { 1,1 };

	//�÷��̾��� ��ǥ�� ������ּ���  
	//.���ٿ����� ������ �����Ϳ� ������ �� �ִ�
	printf("(%d ,%d)", playerpos.xPos,playerpos.yPos);

	Pos origin = { 0,0 };
	struct Circle myCircle = { origin,2.5 };
	//printf("���� : %d, %d, ������% lf", );
	CalculateCircleInfo(myCircle);
}


void CalculateCircleInfo(Circle Circle)
{
	printf("ȣ�� ���� : %lf\n", 2 * 3.14*Circle.radius);
	printf("���� ���� : %lf\n", 0.5 * 3.14 * Circle.radius * Circle.radius);
	printf("������ ��ġ : %d %d\n", Circle.origin.xPos, Circle.origin.yPos);
}

void ShowPlayerCurrentPos(player player)
{
	printf("ü�� %d",player.playerhp);
	printf("�̸� %s", player.playerName);
}
