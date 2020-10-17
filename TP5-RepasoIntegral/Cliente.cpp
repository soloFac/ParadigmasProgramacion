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
	this->Membresia = new MembresiaClasica;
}


string Cliente::getNombre() { return nombre; }
string Cliente::getApellido() { return apellido; }
string Cliente::getDireccion() { return direccion; }
string Cliente::getDni() { return dni; }
string Cliente::getTelefono() { return telefono; }

void Cliente::AnotarseMembresia(TipoMembresia* tipoMembresia) {
	this->Membresia = tipoMembresia;
}

TipoMembresia* Cliente::getMembresia() {
	return this->Membresia;
}

Cliente::~Cliente() {
}
