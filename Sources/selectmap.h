/* selectmap.h */
#pragma once

#include <io.h>
#include "main.h"
#include "parson.h"


int mapCount; // ���� ����
char** mapList; // �� ���� â���� ��� �� ���

const int slp = 32; // selectmap left padding
const int stp = 2; // selectmap top padding

char* statsPath; // stats.dat ���� ��� (JSON) ("maps/stats.dat")


char* main_selectmap();
int loadMaps();
int showMapList();
int selecting(int mapCount);
void blink(int pointer);
