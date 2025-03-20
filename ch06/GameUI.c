#include "GameUI.h"


/*���� ��ǥ �÷��̾��� ��ǥ�� Ű����� �Է¹޾� ����Ǵ� �Լ� �����
		1. �÷��̾� ��ǥ ����
		2.Ű���带 �Է� �޴� �Լ�- �÷��̾� ��ǥ�� �Ű� ������ �޴� �Լ�
		3. Ŀ�� ��ġ�� �����ؼ� UI�� ����Ѵ�
*/
void GameStart()
{

	POS playerpos = { 0,0 };
	player myPlayer = { "���ΰ�" ,playerpos };
	while (true)
	{	
		//1. ������ �Է��� �޴´�
		//2.����� ������ ����Ѵ�
		//3. sleep()
		InputPlayerKey();
		ShowPlayerInfo();
		sleep(100);
	}
}

void InputPlayerKey(player* PlayerPtr)
{
	System("cls");
	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			PlayerPtr->playerpos.posx -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			PlayerPtr->playerpos.posx += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			PlayerPtr->playerpos.poxy -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			PlayerPtr->playerpos.poxy += 1;
		}
	}
}

void GotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE));
}

void ShowPlayerInfo(const player* playerPtr)
{
	GotoXY(50, 1);
	printf("�÷��̾��� ����");

	GotoXY(50, 3);
	printf("�÷��̾��� �̸� : %s", playerPtr->PlayerName);

	GotoXY(50, 4);
	printf("�÷��̾�")
}
