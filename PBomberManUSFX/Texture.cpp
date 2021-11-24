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

bool Texture::loadFromImage(std::string path, Uint8 r, Uint8 g, Uint8 b)
{
	free();

	if (renderer == nullptr) {
		std::cout << "No se cuenta con un renderizador" << std::endl;
		return false;
	}

	SDL_Surface* imageSurface = IMG_Load(path.c_str());
	if (imageSurface == nullptr) {
		std::cout << "Error al cargar la imagen" << std::endl;
	return false;
	}

	SDL_SetColorKey(imageSurface,SDL_TRUE, SDL_MapRGB(imageSurface->format, r, g, b));
	texture = SDL_CreateTextureFromSurface(renderer, imageSurface);
	if (texture == nullptr) {
		std::cout << "Error al cargar la textura" << std::endl;
		return false;
	}
	ancho = imageSurface->w;
	alto = imageSurface->h;
	SDL_FreeSurface(imageSurface);
	return true;

}
void  Texture::render(int x, int y, SDL_Rect* clip, SDL_Rect* rect, double angle, SDL_Point* center, SDL_RendererFlip renderFlip) {
	if (renderer == nullptr) {
		return;
	}
	if (rect == nullptr) {
		SDL_Rect rect2 = { x,y,ancho,alto };
		if (clip != nullptr) {
			rect2.w = clip->w;
			rect2.h = clip->h;
	
		}
		SDL_RenderCopyEx(renderer, texture, clip, &rect2, angle, center, renderFlip);
	}
	else {
		SDL_RenderCopyEx(renderer, texture, clip, rect, angle, center, renderFlip);
	}

}