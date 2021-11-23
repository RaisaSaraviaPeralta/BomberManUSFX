#pragma once
#include <iostream>
//#include <string>
//#include <stdlib.h>
//#include <time.h>
//#include <vector>

#include <SDL.h>
//#include <SDL_image.h>
using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

class GameManager
{
private:
	/*SDL_Window* gWindow;
	SDL_Renderer* gRenderer;*/
	SDL_Window* gWindow = NULL;
	SDL_Surface* gScreenSurface = NULL;
	SDL_Surface* gHelloWorld = NULL;


public:
	GameManager();
	bool onInit();
	int onExecute();
	bool init();
	bool loadMedia();
	void close();
};

