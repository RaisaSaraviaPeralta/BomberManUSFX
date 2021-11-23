#include <iostream>
//#include "Detonador.h"
//#include "GameObject.h"
//#include "GameActor.h"
#include "GameManager.h"


using namespace std;

int main(int argc, char* args[]) {
	GameManager* gm01 = new GameManager();
	return gm01->onExecute();

	return 0;
}