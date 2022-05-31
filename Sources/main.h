/* main.h */
#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "fun.h"

#define SCREEN_WIDTH 120 // �ܼ� â ���� ����
#define SCREEN_HEIGHT 30 // �ܼ� â ���� ����

#define LINE 4 // ��Ʈ ������ �� = ������ Ű�� ����


enum KeyCode { // Ű�ڵ�
	BACKSPACE = 8, // �齺���̽� Ű�ڵ�
	TAB = 9, // �� Ű�ڵ�
	ENTER = 13, // ���� Ű�ڵ�
	ESC = 27, // ESC Ű�ڵ�
	SPACE = 32, // �����̽��� Ű�ڵ�
	UP = 72, // ���� ����Ű Ű�ڵ�
	DOWN = 80 // �Ʒ��� ����Ű Ű�ڵ�
};


int key[LINE]; // �� ������ ������ Ű ���
wchar_t keyName[LINE][5]; // �� Ű�� �̸�
const char* mapFolder; // ���� ����� ���� ��� ("maps")


// selectmap.h
extern int mapCount;
extern char** mapList;


void main_keysetting();
void main_title();
char* main_selectmap();
void main_gameplay(char* _mapName);
