#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

#include <SDL.h>
//#include <SDL_image.h>
using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

class GameManager
{
public:
	/*SDL_Window* gWindow;
	SDL_Renderer* gRenderer;*/
	SDL_Window* gWindow ;
	SDL_Renderer* gRenderer;
	


public:
	GameManager();
	bool onInit();
	int onExecute();
	void close();
};

