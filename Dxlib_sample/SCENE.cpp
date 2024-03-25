#include "SCENE.h"

SCENE::SCENE(class GAME* game) :GAME_OBJECT(game)
{}


void SCENE::proc() {
	update();
	draw();
	nextScene();
}
