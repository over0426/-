#include "TITLE.h"
#include"CONTAINER.h"

TITLE::TITLE(class GAME* game)
:SCENE(game)
{

}

TITLE::~TITLE() {

}

void TITLE::create() {
	Title = game()->container()->title();
}

void TITLE::draw() {
	SetFontSize(Title.fontSize);
	DrawString(Title.pos.x,Title.pos.y,Title.text,Title.textColor);

}

void TITLE::nextScene() {
	game()->changeScene(GAME::PLAY_ID);
}
