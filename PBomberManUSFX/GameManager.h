#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>


#include <SDL.h>
#include <SDL_image.h>
#include "Bomber.h"
#include "Enemigo.h"
#include "Explosion.h"
#include "MuroMetalico.h"
using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

class GameManager
{
private:
	//the window we'll be rendering to
	SDL_Window* gWindow ;

	//the window renderer
	SDL_Renderer* gRenderer;

	//current displayed texture
	SDL_Texture* gTexture = nullptr;
	//Texture* texturaBomber1;
	//Texture* texturaBomber2;


	/*Texture* texturaEnemigo1;
	Texture* texturaEnemigo2;
	Texture* texturaEnemigo3;
	Texture* texturaEnemigo4;
	Texture* texturaEnemigo5;
	
	Texture* texturaExplosion1;
	Texture* texturaExplosion2;
	Texture* texturaExplosion3;

	Texture* texturaMuroMetalico1;
	Texture* texturaMuroMetalico2;
	Texture* texturaMuroMetalico3;*/

	vector<GameObject*>actoresJuego;


public:
	GameManager();
	int onExecute();
	bool onInit();
	void close();
    bool loadMedia();
	SDL_Texture* loadTexture(std::string path);
};

