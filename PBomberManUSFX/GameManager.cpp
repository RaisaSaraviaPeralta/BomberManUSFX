#include "GameManager.h"
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>


GameManager::GameManager() {
	gWindow = nullptr;
	gRenderer = nullptr;
	/*texturaBomber1 = nullptr;
	texturaBomber2 = nullptr;

	texturaEnemigo1 = nullptr;
	texturaEnemigo2= nullptr;
	texturaEnemigo3 = nullptr;
	texturaEnemigo4 = nullptr;
	texturaEnemigo5 = nullptr;

	texturaExplosion1 = nullptr;
	texturaExplosion2 = nullptr;
	texturaExplosion3 = nullptr;

	texturaMuroMetalico1 = nullptr;
	texturaMuroMetalico2 = nullptr;
	texturaMuroMetalico3 = nullptr;*/
}

SDL_Texture* GameManager::loadTexture(std::string path)
{
	return nullptr;
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



bool GameManager:: loadMedia()
{
	//Loading success flag
	bool success = true;

	//Load splash image
	gTexture = loadTexture("texture.png");
	if (gTexture == NULL)
	{
		printf("Failed to load texture image! \n ");
		success = false;
	}

	return success;
}



		

void  GameManager:: close()
{

	//Free loaded image
	SDL_DestroyTexture(gTexture);
	gTexture = nullptr;

	//Destroy window
	SDL_DestroyRenderer(gRenderer);
	SDL_DestroyWindow(gWindow);
	gWindow = nullptr;
	gRenderer = nullptr;

	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}
int GameManager::onExecute() {

	if (!onInit()) {
		cout << "Failed to initialize" << endl;
		return -1;
	}

	else
	{

		//Load media
		/*if (!loadMedia()) {

			printf("Failed to load media!\n");
		}
		else {*/
			//Main loop flag
			bool quit = false;

			//Event handler
			SDL_Event event;

			//texturaBomber1 = new Texture(gRenderer);
			//texturaBomber1->loadFromImage("resources/bomber.bmp");

			//texturaBomber2 = new Texture(gRenderer);
			//texturaBomber2->loadFromImage("resources/textures.bmp");
			//
			//Bomber* b1 = new Bomber(texturaBomber1);
			//Bomber* b2 = new Bomber(texturaBomber2);


			//b1->setImagenX(3);
			//b1->setImagenY(3);
			//b1->setAncho(20);
			//b1->setAlto(35);

			//b2->setImagenX(570);
			//b2->setImagenY(3);
			//b2->setAncho(30);
			//b2->setAlto(35);

			//actoresJuego.push_back(b1);
			//actoresJuego.push_back(b2);


			////ENEMIGOS
			//texturaEnemigo1 = new Texture(gRenderer);
			//texturaEnemigo1->loadFromImage("resources/enemy.png");
			//texturaEnemigo2 = new Texture(gRenderer);
			//texturaEnemigo2->loadFromImage("resources/enemy.png");
			//texturaEnemigo3 = new Texture(gRenderer); 
			//texturaEnemigo3->loadFromImage("resources/enemy.png");
			//texturaEnemigo4 = new Texture(gRenderer); 
			//texturaEnemigo4->loadFromImage("resources/enemy.png");
			//texturaEnemigo5 = new Texture(gRenderer); 
			//texturaEnemigo5->loadFromImage("resources/enemy.png");


			//Enemigo* e1 = new Enemigo(texturaEnemigo1);
			//Enemigo* e2 = new Enemigo(texturaEnemigo2);
			//Enemigo* e3 = new Enemigo(texturaEnemigo3);
			//Enemigo* e4 = new Enemigo(texturaEnemigo4);
			//Enemigo* e5 = new Enemigo(texturaEnemigo5);

			//actoresJuego.push_back(e1);
			//actoresJuego.push_back(e2);
			//actoresJuego.push_back(e3);
			//actoresJuego.push_back(e4);
			//actoresJuego.push_back(e5);

			////EXPLOSION
			//texturaExplosion1 = new Texture(gRenderer);
			//texturaExplosion1->loadFromImage("resources/explosion.png");
			//texturaExplosion2 = new Texture(gRenderer);
			//texturaExplosion2->loadFromImage("resources/explosion.png");
			//texturaExplosion3 = new Texture(gRenderer);
			//texturaExplosion3->loadFromImage("resources/explosion.png");

			//Explosion* x1 = new Explosion(texturaExplosion1);
			//Explosion* x2 = new Explosion(texturaExplosion2);
			//Explosion* x3 = new Explosion(texturaExplosion3);

			//actoresJuego.push_back(x1);
			//actoresJuego.push_back(x2);
			//actoresJuego.push_back(x3);


			////MUROS
			//texturaMuroMetalico1 = new Texture(gRenderer);
			//texturaMuroMetalico1->loadFromImage("resources/muro_metal.jpg");
			//texturaMuroMetalico2 = new Texture(gRenderer);
			//texturaMuroMetalico2->loadFromImage("resources/muro_metal.jpg");
			//texturaMuroMetalico3 = new Texture(gRenderer);
			//texturaMuroMetalico3->loadFromImage("resources/muro_metal.jpg");

			
			
			////muro contorno superior
			//for (int i = 0; i < 100;i++) {
			//	MuroMetalico* mm1 = new MuroMetalico(texturaMuroMetalico1);
			//	mm1->setImagenX(100);
			//	mm1->setImagenY(0);
			//	mm1->setAncho(30);
			//	mm1->setAlto(30);
			//	
			//}
			////muro contorno izquierdo
			//for (int i = 0; i < 100;i++) {
			//	MuroMetalico* mm2 = new MuroMetalico(texturaMuroMetalico1);
			//	mm2->setImagenX(0);
			//	mm2->setImagenY(100);
			//	mm2->setAncho(30);
			//	mm2->setAlto(30);
			//	mm2->setPosicionX(0);
			//	mm2->setPosicionY(100);
			//}
			////muro contorno derecho
			//for (int i = 0; i < 100;i++) {
			//	MuroMetalico* mm2 = new MuroMetalico(texturaMuroMetalico1);
			//	mm2->setImagenX(100);
			//	mm2->setImagenY(0);
			//	mm2->setAncho(30);
			//	mm2->setAlto(30);
			//
			//}
			////muro contorno inferior
			//for (int i = 0; i < 100;i++) {
			//	MuroMetalico* mm2 = new MuroMetalico(texturaMuroMetalico1);
			//	mm2->setImagenX(100);
			//	mm2->setImagenY(100);
			//	mm2->setAncho(30);
			//	mm2->setAlto(30);
			//	
			//}

			//
	
			//While application is running
			while (!quit) {

				//Handle events on queue
				while (SDL_PollEvent(&event) != 0) {

					//User requests quit
					if (event.type == SDL_QUIT) {
						quit = true;
					}
				}
				
			//}
				SDL_SetRenderDrawColor(gRenderer, 0xFF, 0XFF, 0XFF, 0XFF);
				SDL_RenderClear(gRenderer);

				

				for (int i = 0;i<actoresJuego.size();i++) {
					((GameActor*)actoresJuego[i])->setPosicionX(rand() % SCREEN_WIDTH);
					((GameActor*)actoresJuego[i])->setPosicionY(rand() % SCREEN_HEIGHT);

					actoresJuego[i]->render();
				}

		        SDL_RenderPresent(gRenderer);
		    }
		
		//}
	}
	close();

};
