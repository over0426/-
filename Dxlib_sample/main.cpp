#include"DxLib.h"
#include"GAME.h"

#define GameWidth 1920
#define GameHeight 1028
#define GameColor 32
#define GameTitle "title"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetOutApplicationLogValidFlag(FALSE);             //Log.txt���o�͂��Ȃ�
	ChangeWindowMode(TRUE);                           // �E�B���h�E���[�h��ύX
	SetGraphMode(GameWidth, GameHeight, GameColor);
	SetWindowSize(GameWidth, GameHeight);
	SetMainWindowText(GameTitle);
	SetBackgroundColor(0, 0, 0);
	SetWaitVSyncFlag(TRUE);
	SetAlwaysRunFlag(TRUE);

	//SetWindowIconID();�@�A�C�R����������΂ǂ���

	if (DxLib_Init() == -1) {
		return -1;
	}
	
	SetDrawScreen(DX_SCREEN_BACK); //�_�u���o�b�t�@�����O


	GAME game;
	game.run();

	DxLib_End(); //DxLib�I��

	return 0;
}