/* title.c */

#include "title.h"


// Ÿ��Ʋ ȭ�� ��
void main_title() {

	system("cls");

	setColor(VIOLET);
	for (int i = 0; i < titleHei; i++) {
		gotoxy(SCREEN_WIDTH/2 - titleWid/2, 4+i);
		puts(beatc[i]);
	}

	setColor(YELLOW);
	const wchar_t title[] = L"Developed by ������";
	gotoxy((SCREEN_WIDTH - (int)wcslen(title)*2) / 2, 4+titleHei+1);
	wprintf(L"%s", title);

	setColor(GRAY);
	const char anykey[] = "�����Ϸ��� �ƹ� Ű�� ��������";
	gotoxy(SCREEN_WIDTH/2 - (int)strlen(anykey)/2, 4+titleHei+4);
	puts(anykey);

	gotoxy(SCREEN_WIDTH/2, 4+titleHei+5);
	setCursor(UNDERBAR);
	clearBuffer();

	int _ = _getch();
}
