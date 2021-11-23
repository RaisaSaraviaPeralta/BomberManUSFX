#include "GameManager.h"
GameManager::GameManager() {
	gWindow = nullptr;
	gRenderer = nullptr;
	
}

bool GameManager::onInit() {
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        success = false;
    }
    else
    {
        //Create window
        gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (gWindow == nullptr)
        {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
            success = false;
        }
        else
        {
            //Get window surface
            //gScreenSurface = SDL_GetWindowSurface(gWindow);
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
			if (gRenderer = nullptr) {
				cout << "renderer could not be created SDL Error: " << SDL_GetError() << endl;
				success = false;
			}
			else
			{
				//initialize renderer color
				//SDL_SetRenderDrawColor(gRenderer, 0xF2, 0xF1, 0x4F, 0xFF);
				/*if(TIF_Init() == -1{
				cout<<"error inicializacion SDL_ttf"<< TTF_GetError()<<endl;
				success = false;
				}*/
			}
		
		}
    }

    return success;
};



void  GameManager:: close()
{
	//Deallocate surface
	//SDL_FreeSurface(gHelloWorld);
	//gHelloWorld = NULL;

	
	//Destroy window
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;

	//Quit SDL subsystems
	SDL_Quit();
}


	int GameManager::onExecute(){
		if (!onInit()) {
            cout << "Failed to initialize" << endl;
			return -1;
		}
	
		else
		{
			//aqui inicia el juego
			//Load media
			//if (!loadMedia())
			//{
			//	printf("Failed to load media!\n");
			//}
			//else
			//{
			//	//Apply the image
			//	SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);

			//	//Update the surface
			//	SDL_UpdateWindowSurface(gWindow);

			//	//Wait two seconds
				SDL_Delay(2000);
			//}
		}

		//Free resources and close SDL
		close();

		return 0;

	};