/* gameplay.h */
#pragma once
#pragma comment(lib,"winmm.lib")

#include <time.h>
#include <Windows.h>
#include <mmsystem.h>
#include <Digitalv.h>
#include <wchar.h>
#include <math.h>
#include "parson.h"
#include "main.h"


#define NOTETHK 6 // note thickness; ��Ʈ �ϳ��� �β� (���� ����)
#define HEI 20 // height; â ���� (�ؿ��� �� ��° ���� ����Ʈ ������)

#define N '@' // ��Ʈ
#define x ' ' // ��Ʈ ����


const int glp = (SCREEN_WIDTH/2) - (LINE * NOTETHK / 2); // gameplay left padding
const int gtp = 0; // gameplay top padding


char* mapName; // �� �̸�
char* mapDir; // �� ���� ��� ("maps/mapName/")
JSON_Object* mapInfo; // info.json ������
char** map; // �� (��Ʈ�� ������ ����)
int mapLength; // ������ ���� (map�� �� ����)
int FALLSPEED = 150; // ��Ʈ�� �������� �ӵ�(ms), FALLSPEED�ʿ� �� ĭ�� ������

char note[HEI][LINE]; // ȭ�鿡 ���̴� ��� ��Ʈ ����Ʈ (= ȭ��)

int mapIndex; // ���� ���� �� ��° ���� �а� �ִ°�?
int noteCount; // ��Ʈ�� ������ Ƚ�� (���� ��꿡 ���)
clock_t pauseTimer; // �Ͻ����� ���¿��� �ð�

int score; // ����
int combo; // �޺�
double accuracy; // ��Ȯ��

BOOL paused; // �Ͻ����� �ƴ°�?
BOOL songPlayed; // BGM�� ����ƴ°�?
BOOL gameEnd; // ������ �����°�?
BOOL quit; // ���� �߰��� ������ �������� �ϴ°�?

// ���� �ؽ�Ʈ�� ������ �ϴ°�? (removingJudgeTxt() ����)
// 0: false, 1: ���� ��ȣ, 2: ���� Ÿ�̸� �۵� ��
int shouldRemove[LINE];
BOOL isPressed[LINE]; // �� Ű(����)�� ���ȴ°�?


// BGM ��� ����
MCI_OPEN_PARMS openBgm;
int dwID;


// gameplay.h
extern char* statsPath;


void main_gameplay(char* _mapName);

void init();
int readMap();
void initBgm();

void drawScreen();
void countdown();

void fallingNote();
void showNotes();
void keyInput();
void press(int line);
void hitNote(int line, int judgement);
void removingJudgeTxt();

void pause();

void playBgm();
void updateUI(int comboPlus);

void showStats();
