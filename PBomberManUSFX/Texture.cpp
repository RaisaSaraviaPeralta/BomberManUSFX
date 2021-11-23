#include "Texture.h"

Texture::Texture()
{
	texture = nullptr;
	ancho = 0;
	alto = 0;
}

Texture::~Texture()
{
	free();
}
void Texture::free() {
	if (texture != nullptr) {
		SDL_DestroyTexture(texture);
		texture = nullptr;

		ancho = 0;
		alto = 0;
	}
}
