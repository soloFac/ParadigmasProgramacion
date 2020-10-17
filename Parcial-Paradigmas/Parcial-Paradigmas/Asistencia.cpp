#include "Asistencia.h"

Asistencia::Asistencia(float Sueldo){
	this->Sueldo = Sueldo;
}

float Asistencia::CalcularSueldo() {
	return this->Sueldo * 0.95;
}

void Asistencia::Trabajar(Nave& nNave) {
	//Reemplazarcomponentes
	int pos;
	cout << "Ingrese la posicion en la que desea reemplazar: " << endl;
	cin >> pos;
	cout << "Componente: " << endl;
	string* componente = new string();
	cin >> *componente;
	nNave.reemplazarComponente(pos, componente);
}