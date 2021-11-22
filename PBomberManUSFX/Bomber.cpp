#include "Bomber.h"

Bomber::Bomber()
{
	anchoAvatar = 5;
	altoAvatar = 5;
	numeroVidas = 3;
	mostrarInformacion();
}

Bomber::Bomber(int _anchoAvatar, int _altoAvatar, int _numeroVidas)
{
	anchoAvatar = _anchoAvatar;
	altoAvatar = _altoAvatar;
	numeroVidas = _numeroVidas;
	mostrarInformacion();
}

void Bomber::morir()
{
}

void Bomber::moverse() {

}

void Bomber::colocarBomba()
{
}

void Bomber::mostrarInformacion()
{
	cout << "DATOS BOMBER" << endl;
	cout<< "ancho avatar" << anchoAvatar << "alto avatar " << altoAvatar << endl;
}
