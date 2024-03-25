#pragma once
#include "DxLib.h"

#define GameFPS 60

#define MicroSecond 1000000.0f
#define MillSecond  1000.0f
#define WaitTimeMill 3000

typedef struct FPS {

	LONGLONG FirstTakeTime = 0; //1�t���[���ڂ̌v������
	LONGLONG NowTakeTime = 0; //���݂̌v������
	LONGLONG OldTakeTime = 0; //�ȑO�̌v������

	float Deltatime = 0.000001f; //�o�ߎ���
	float Average = 0.0f; //���݂̃t���[����
	int FrameCount = 1; //����fps�l
};

extern FPS fps;

//�O���v���g�^�C�v�錾
extern void FPSInit();
extern void FPSCheck();
extern void FPSDraw();
extern void FPSWait();