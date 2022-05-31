/* fun.h */
#pragma once

#include <Windows.h>
#include <conio.h>


// HIDE: Ŀ�� �����, UNDERBAR: _ Ŀ�� ���̱�, BLOCK: ��� Ŀ�� ���̱�
enum CURSOR_TYPE { HIDE, UNDERBAR, BLOCK };
// �ܼ� â ���� ����(setColor)�� �� ���� �����ڵ�
enum Colors {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VIOLET,
	DARK_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE
};


void gotoxy(int x, int y);
void movexy(int x, int y);
void setCursor(enum CURSOR_TYPE curType);
int curX();
int curY();
void clearBuffer();
void setColor(enum Colors color);
