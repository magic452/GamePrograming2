#pragma once
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
#include"Structpoint.h"

//������ ����ü
//������ �̸�
//�������� ��ǥ
//������ ����
//������ ���ݷ� ��ȭ ���ʽ�
void GameStart();

void InputPlayerKey(player* PlayerPtr);

void GotoXY(int x, int y);

void ShowPlayerInfo(const player* playerPtr);