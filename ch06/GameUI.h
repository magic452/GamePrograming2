#pragma once
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
#include"Structpoint.h"

//아이템 구조체
//아이템 이름
//아이템의 좌표
//아이템 레벨
//아이템 공격력 강화 보너스
void GameStart();

void InputPlayerKey(player* PlayerPtr);

void GotoXY(int x, int y);

void ShowPlayerInfo(const player* playerPtr);