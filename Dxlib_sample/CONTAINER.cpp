#include "CONTAINER.h"

void CONTAINER::load()
{
	setData();
}
void CONTAINER::setData()
{
	Data.title.textColor = GetColor(255, 0, 0);
	Data.title.fontSize = 200;
	Data.title.pos.x = 160;
	Data.title.pos.y = 200;
	strcpy_s(Data.title.text,"REVERSI");

	Data.result.textColor = GetColor(255, 0, 0);
	Data.result.fontSize = 200;
	Data.result.pos.x = 160;
	Data.result.pos.y = 200;
	strcpy_s(Data.result.text,"PLAR");

	Data.play.textColor = GetColor(255, 0, 0);
	Data.play.fontSize = 200;
	Data.play.pos.x = 160;
	Data.play.pos.y = 200;
	strcpy_s(Data.play.text,"RESULT");
}