#pragma once

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
#include <vector>
#include "TipoMembresia.h"
#include "MembresiaClasica.h"
#include "MembresiaExclusiva.h"
using namespace std;
class Cliente
{
private:
	string nombre;
	string apellido;
	string direccion;
	string dni;
	string telefono;
	TipoMembresia* Membresia;

public:
	Cliente();
	Cliente(string nombre, string apellido, string direccion, string dni, string telefono);
	string getNombre();
	string getApellido();
	string getDireccion();
	string getDni();
	string getTelefono();
	TipoMembresia* getMembresia();
	void AnotarseMembresia(TipoMembresia* tipoMembresia);
	~Cliente();
};

#endif