#include "GameManager.h"
GameManager::GameManager() {
	gWindow = nullptr;
	gRenderer = nullptr;
}

bool GameManager::onInit() {
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << endl;
		success = false;
	}
	else
	{
		//Create window
		gWindow = SDL_CreateWindow("Bomberman USFX", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == nullptr)
		{
			cout << "Window could not be created! SDL_Error: " << SDL_GetError() << endl;
			success = false;
		}
		else
		{

			//Create vsynced renderer for window
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
			if (gRenderer == nullptr)
			{
				cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << endl;
				success = false;
			}
			else
			{
				
				//Initialize renderer color
				/*SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
				if (TTF_Init() == -1) {
					cout << "Error inicializacion SDL_ttf" << TTF_GetError() << endl;
					success = false;
				}
			}

			//Texture::renderer = gRenderer;
			*/
			}
		}

		return success;
	}
};

	int GameManager::onExecute(){
		if (onInit() == false) {
			return -1;
		}
		//aqui comienza la ejecucion del video juego
		return 0;
	};