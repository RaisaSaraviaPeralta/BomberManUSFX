#pragma once
#include <SDL.h>
#include <SDL_image.h>


class Texture
{
private:
	SDL_Texture* texture;
	int ancho;
	int alto;
public:
	Texture();
	~Texture();
	void free();
};

