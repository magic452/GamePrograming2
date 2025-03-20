#pragma once



/*����ü
* 
��ǥ �������� ���� �����ؼ� ����Ѵ�
���� ,�Ǽ�, ���� ǥ���ϴ� ���
�������� �����Ѵ� ,�̸� ������ȣ Ÿ��
�������� ���� �����Ѵ�
�ϳ��� �迭�� ��� �������� ǥ���� �� �ִ�
�������� �����ؼ� ������ �����͸� �迭�� ǥ���Ѵ�
*/
/*����ü
* struct: ����ڰ� ���� ������ �ڷ���
* �� �����͸� ���� �����ұ�
* 
* 2���� ��ǥ int x��ǥ int y��ǥ
* int x
* int y
* �׻� 2���� ��ǥ�� �̷���� �ִ� �츮�� ���� ��ǥ�� �ǹ��ϴ� �ڷ����� ����� ������
*/

/*
	struct �̸�
	{
		int xPos
		int yPos
	}

	1.����ü ǥ�� ��� struct �̸�(int x, int y, int z)
	2.����ü �ȿ� ����ü�� ������ ������  ��: ������ ������  ���� ����, ȣ�Ǳ���
*/
#include<stdio.h>

typedef struct Pos
{
	int xPos;
	int yPos;
}Pos;

/*
* ����ü��  �����Ҷ����� struct �����ϱ� ������
* typedef struct Ÿ���� �̸��� ���� �� �� �ִ�

*/

/*
* ����ü�� �̿��ؼ� �Լ��� ����°�
*/
typedef struct Circle //������ ���������� ������ �����̴�
{
	Pos origin;
	double radius;
}Circle;


void StructExample();

void CalculateCircleInfo(Circle Circle);

//�÷��̾��� ������ ����ϴ� �Լ��� ����� ������

typedef struct 
{
	char* playerName;
	Pos playerPos;
	int playerhp ;

}player;

void ShowPlayerCurrentPos(player player);