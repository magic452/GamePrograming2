#include "Structpoint.h"

void ch06Example()
{
	printf("ch06");
	POS playerpos = { 5,5 };
	playerpos.posx = 3;
	playerpos.poxy = 4;

	player player1 = { "AAA",playerpos };
	printf("�÷��̾��� �̸� %s �÷��̾��� ������ġ %d %d\n", player1.PlayerName,
		player1.playerpos.posx, player1.playerpos.poxy);
	ChangePlayerPos(&player1);
	//ShowPlayerInfo1(player1);
	//ShowPlayerInfo2(&player1);
	ShowPlayerInfo3(&player1);
}

void ShowPlayerInfo1(player player1)
{
	printf("�÷��̾��� �̸� %s �÷��̾��� ������ġ %d %d\n", player1.PlayerName,
		player1.playerpos.posx, player1.playerpos.poxy);
}

void ShowPlayerInfo2(const player* playerptr)

{
	printf("�÷��̾��� �̸� %s �÷��̾��� ������ġ %d %d\n", (*playerptr).PlayerName,
		(*playerptr).playerpos.posx, (*playerptr).playerpos.poxy);
	//(*playerptr).PlayerName;
}

void ShowPlayerInfo3(const player* playerptr)
{

	printf("�÷��̾��� �̸� %s �÷��̾��� ������ġ %d %d\n", playerptr->PlayerName,
		playerptr ->playerpos.posx, playerptr->playerpos.poxy);
}

void ChangePlayerPos(player* playerptr)
{
	playerptr->playerpos.posx += 1;
	playerptr->playerpos.poxy += 1;
}
