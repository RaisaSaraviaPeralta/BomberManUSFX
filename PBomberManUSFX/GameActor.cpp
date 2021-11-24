#include "GameActor.h"

GameActor::GameActor():GameObject()
{
	posicionX = 0;
	posicionY = 0;
	Texture* textura;
	direccionActual = GAME_DIRECTION_NONE;
	direccionSiguiente = GAME_DIRECTION_NONE;
}


GameActor::GameActor(string _nombre):GameObject(_nombre)
{
	posicionX = 0;
	posicionY = 0;
	Texture* textura;
	direccionActual = GAME_DIRECTION_NONE;
	direccionSiguiente = GAME_DIRECTION_NONE;
}

void GameActor::render()
{
	if (visible) {
		SDL_Rect* cuadroAnimacion = new SDL_Rect({ 0,0,getAncho(),getAlto() });
		textura->render(getPosicionX(),getPosicionY(),cuadroAnimacion);

	}
}
