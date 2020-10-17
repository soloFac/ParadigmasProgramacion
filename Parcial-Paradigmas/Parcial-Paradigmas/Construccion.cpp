#include "Construccion.h"

Construccion::Construccion(float Sueldo) {
	this->Sueldo = Sueldo;
}

float Construccion::CalcularSueldo() {
	return this->Sueldo * 0.90;
}

void Construccion::Trabajar(Nave &nNave) {
	//AgregarComponentes
	cout << "Componente: " << endl;
	string * comp = new string();
	cin >> *comp;

	nNave.agregarComponentes(comp);
}