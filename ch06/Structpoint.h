#pragma once
#include<stdio.h>
#include<Windows.h>


//�÷��̾��� ��ǥ - �̸� - ��ǥ - ������

typedef struct _POS
{
	int posx;
	int poxy;
}POS;

typedef struct _Player
{
	char* PlayerName;
	POS playerpos;
}player;
void ch06Example();

void ShowPlayerInfo1(player player);

void ShowPlayerInfo2(const player* playerptr);
void ShowPlayerInfo3(const player* playerptr);

void ChangePlayerPos(player* playerptr);
