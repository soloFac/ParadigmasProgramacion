#include "Sistema.h"

Sistema::Sistema(string nombre = "indefinido") {
	this->nombreEmpresa = nombre;
}

float Sistema::CalcularRecaudacion(int mes) {
	float recaudacion = 0;
	vector<Compra*>::iterator it;

	for (it = compras.begin(); it != compras.end(); ++it)
	{
		if ((*it)->getFecha().getMes() == mes)
		{
			recaudacion += (*it)->CalcularMonto();
		}
	}
	return recaudacion;
}

bool Sistema::RegistrarCompra(Compra* c) {

	this->compras.insert(this->compras.end(), c);

	return true;
}

Sistema::~Sistema() {

	vector<Compra*>::iterator itcomp;
	for (itcomp = compras.begin(); itcomp != compras.end(); ++itcomp)
	{
		delete(*itcomp);
	}
}