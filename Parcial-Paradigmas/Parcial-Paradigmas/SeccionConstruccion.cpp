#include "SeccionConstruccion.h"

SeccionConstruccion::SeccionConstruccion(string idSeccion) {
	this->idSeccion = idSeccion;
}

void SeccionConstruccion::ConstruirNaves() {
	int cantNaves;
	cout << "\nCantidad de naves a constriur " << endl;
	cin >> cantNaves;

	Nave* nNave;
	vector<Nave*>::iterator it;
	for (int i = 0;  i < cantNaves; i++)
	{
		nNave = new Nave(i);
		this->naves.insert(this->naves.end(), nNave);
	}
}

void SeccionConstruccion::AgregarEmpleado(Empleado* empleado) {
	vector<Empleado*>::iterator it;
	
	this->empleados.insert(this->empleados.end(), empleado);
}

SeccionConstruccion::~SeccionConstruccion() {
	vector<Nave*>::iterator it;

	for (it = naves.begin(); it != naves.end(); ++it)
	{
		delete (*it);
	}
}

void SeccionConstruccion::RepararNave(Nave &nNave) {
	vector<Empleado*>::iterator itemp;
	
	Cargo* tipoCargo;

	for (itemp = empleados.begin(); itemp < empleados.end(); ++itemp)
	{
		tipoCargo = (*itemp)->getTipoCargo();
		tipoCargo->Trabajar(nNave);
	}
}

void SeccionConstruccion::ListarEmpleados() {
	vector<Empleado*>::iterator it;

	cout << "\n\nListado de Empleados";
	for (it = empleados.begin(); it < empleados.end(); ++it)
	{
		cout << "\n" << (*it);
	}

}


Nave SeccionConstruccion::getNave(int pos) {
	if (pos <= naves.size() && pos > 0)
	{
		return *naves[pos];
	}
}