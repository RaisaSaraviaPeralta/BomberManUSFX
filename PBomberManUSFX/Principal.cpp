#include <iostream>
#include "Detonador.h"
#include "GameObject.h"
#include "GameActor.h"


using namespace std;

int main() {
	GameObject o1;
	GameActor a1;


	cout << "Raisa Saravia Peralta" << endl;
	cout << "CU: 35-4555" << endl;

	Detonador d1;

	d1.setHoras(5);
	d1.setMinutos(20);
	d1.setSegundos(10);

	while (d1.getEjecutado() != true) {
		d1.ReducirTiempo();
	}

	d1.Explotar();


	return 0;
}