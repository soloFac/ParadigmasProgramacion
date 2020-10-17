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
<<<<<<< HEAD
=======
	return recaudacion;
}

Sistema::~Sistema(){
	vector<Producto*>::iterator itprod;
	for (itprod = producto.begin(); itprod != producto.end(); ++itprod)
	{
		delete(*itprod);
	}
	
	vector<Compra*>::iterator itcomp;
	for (itcomp = compra.begin(); itcomp != compra.end(); ++itcomp)
	{
		delete(*itcomp);
	}

	vector<Cliente*>::iterator itclient;
	for (itclient = cliente.begin(); itclient != cliente.end(); ++itclient)
	{
		delete(*itclient);
	}
	
>>>>>>> d9af8bd89e2779dd2853a5036adb5a0e7b9c2358
}