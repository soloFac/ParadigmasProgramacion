#include "Nave.h"
#include <iomanip>

using namespace std;

Nave::Nave(int codNave) {
	this->codNave = codNave;
	this->componentes = new vector<string*>;
}

void Nave::listarComponentes() {
	vector<string*>::iterator itcomp;
	int cont = 0;
	cout << "\n\n Componentes de la nave:";
	for (itcomp = componentes.begin(); itcomp != componentes.end(); ++itcomp)
	{
		cont++;
		cout << "Componente " << cont << ":  " << *itcomp << endl;
	}
}

void Nave::agregarComponentes(string* componente) {
	componentes.insert(componentes.end(), componente);
}

void Nave::reemplazarComponente(int pos, string* componente) {

	if (pos <= componentes.size() && pos >= 0)
	{
		//delete componentes[pos];
		componentes.insert(componentes.begin() + pos, componente);
	}
}