#pragma once
#include "GameObject.h"
#include "GameDirecctions.h"


class GameActor : public GameObject
{

protected:
	int posicionX;
	int posicionY;
	int ancho;
	int alto;
	bool solido;
	bool indestructible;
	bool visible;
	bool movil;
	bool enMovimiento;
	bool aereo;
	bool terrestre;
	bool subterraneo;

	int velocidad;
	int energia;
	int vidas;

	/*Tile* tileActual;
	Tile* tileSiguiente;*/

	GameDirection direccionActual;
	GameDirection direccionSiguiente;

	//std::shared_ptr<Animation> animacion;
public:
	// Propiedades
	/*static TilesGraph* tilesGraph;*/

	//Constructores & destructores
	GameActor();
	GameActor(string _nombre);
	/*GameActor(Texture* _textura);
	~GameActor();*/

	// Metodos accesores
	int getPosicionX() { return posicionX; }
	int getPosiciony() { return posicionY; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	bool getSolido() { return solido; }
	bool getIndestructible() { return indestructible; }
	bool getVisible() { return visible; }
	bool getMovil() { return movil; }
	bool getEnMovimiento() { return enMovimiento; }
	bool getAereo() { return aereo; }
	bool getTerrestre() { return terrestre; }
	bool getSubterraneo() { return subterraneo; }
	int getVelocidad() { return velocidad; }
	int getEnergia() { return energia; }
	int getVidas() { return vidas; }

	/*Tile* getTileActual() { return tileActual; }
	Tile* getTileSiguiente() { return tileSiguiente; }*/
	GameDirection getDireccionActual() { return direccionActual; }
	GameDirection getDireccionSiguiente() { return direccionSiguiente; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { alto = _alto; }
	void setSolido(bool _solido) { solido = _solido; }
	void setIndestructible(bool _indestructible) { indestructible = _indestructible; }
	void setVisible(bool _visible) { visible = _visible; }
	void setMovil(bool _movil) { movil = _movil; }
	void setEnMovimiento(bool _enMovimiento) { enMovimiento = _enMovimiento; }
	void setAereo(bool _aereo) { aereo = _aereo; }
	void setTerrestre(bool _terrestre) { terrestre = _terrestre; }
	void setSubterraneo(bool _subterraneo) { subterraneo = _subterraneo; }
	void setVelocidad(int _velocidad) { velocidad = _velocidad; }
	void setEnergia(int _energia) { energia = _energia; }
	void setVidas(int _vidas) { vidas = _vidas; }

	/*virtual void setTileActual(Tile* _tileNuevo) = 0;
	void setTileSiguiente(Tile* _tileSiguiente) { tileSiguiente = _tileSiguiente; }*/
	void setDireccionActual(GameDirection _direccionActual) { direccionActual = _direccionActual; }
	void setDireccionSiguiente(GameDirection _direccionSiguiente) { direccionSiguiente = _direccionSiguiente; }
	/*void setFramesDireccion(int _framesDireccion) { framesDireccion = _framesDireccion; }
	void setColisionador(SDL_Rect* _colisionador) { colisionador = _colisionador; }*/

	// Metodos varios
	/*bool revisarColision(const SDL_Rect* _otroColisionador);
	bool revisarColision(const SDL_Rect* _colisionador1, const SDL_Rect* _colisionador2);*/
	//bool tratarDeMover(GameDirection _direccionNueva);
	/*
	int restarEnergia();
	int restarVida();*/

	//Metodos virtuales, redefinidos o sobrecargados
	virtual void render() {};
	virtual void update() {};
	/*virtual void handleEvent(SDL_Event* event) {};
	virtual void deleteGameObject() {};*/
};


