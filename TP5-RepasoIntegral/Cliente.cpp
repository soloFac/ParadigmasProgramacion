#include "Cliente.h"
#include <string>
#include <iostream>
using namespace std;

Cliente::Cliente() {}

Cliente::Cliente(string nombre, string apellido, string direccion, string dni, string telefono) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->direccion = direccion;
	this->dni = dni;
	this->telefono = telefono;
	//Por defecto la membresia Clasica es no paga, no tiene beneficios
	this->miMembresia = new MembresiaClasica;
}


string Cliente::getNombre() { return nombre; }
string Cliente::getApellido() { return apellido; }
string Cliente::getDireccion() { return direccion; }
string Cliente::getDni() { return dni; }
string Cliente::getTelefono() { return telefono; }

//CORREGIR, ESTA COMO COMPOSICION??
void Cliente::AnotarseMemebresia(Tipo tipoMembresia) {
	delete this->miMembresia;
	MembresiaClasica mclasica;
	MembresiaExclusiva mexclusiva;

	switch (tipoMembresia)
	{
	case clasica:
		this->miMembresia = &mclasica;
		break;
	case exclusiva:
		this->miMembresia = &mexclusiva;
		break;
	default:
		break;
	}
}
//
//void Cliente::AgregarCompra(int dia, int mes, int anio) {
//	Compra* compra = new Compra()
//	compras.insert();
//}

TipoMembresia* Cliente::getMembresia() {
	return this->miMembresia;
}

Cliente::~Cliente() {
	vector<Compra*>::iterator it;
	for (it = compras.begin(); it != compras.end() ; ++it)
	{
		delete (*it);
	}
	compras.clear();
}

//TipoMembresia* Cliente::CrearMembresiaSegunTipo(Tipo tipoMembresia) {
//	TipoMembresia* membresia;
//	switch (tipoMembresia)
//	{
//	case clasica:
//		membresia = new MembresiaClasica();
//		break;
//	case exclusiva:
//		membresia = new MembresiaExclusiva();
//		break;
//	default:
//		break;
//	}
//	return membresia;
//}