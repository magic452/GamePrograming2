#include "GameUI.h"


/*구현 목표 플레이어의 좌표를 키보드로 입력받아 실행되는 함수 만들기
		1. 플레이어 좌표 정의
		2.키보드를 입력 받는 함수- 플레이어 좌표를 매개 변수로 받는 함수
		3. 커서 위치를 변경해서 UI를 출력한다
*/
void GameStart()
{

	POS playerpos = { 0,0 };
	player myPlayer = { "주인공" ,playerpos };
	while (true)
	{	
		//1. 유저의 입력을 받는다
		//2.변경된 정보를 출력한다
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
	printf("플레이어의 정보");

	GotoXY(50, 3);
	printf("플레이어의 이름 : %s", playerPtr->PlayerName);

	GotoXY(50, 4);
	printf("플레이어")
}
