#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

using namespace std;
class Texture
{
private:
	SDL_Texture* texture;
	int ancho;
	int alto;
	SDL_Renderer*renderer;


public:
	Texture();
	~Texture();
	void free();

	bool loadFromImage(std::string path, Uint8 r = 0, Uint8 g = 0, Uint8 b = 0);
	void render(int x, int y,SDL_Rect* clip,SDL_Rect* rect, double angle, SDL_Point* center, SDL_RendererFlip renderflip);

};

