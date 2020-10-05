#pragma once

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
#include "Compra.h"
#include <vector>
#include "TipoMembresia.h"
using namespace std;
class Cliente
{
private:
	string nombre;
	string apellido;
	string direccion;
	string dni;
	string telefono;
	TipoMembresia* miMembresia;
	vector<Compra*> compras;

public:
	Cliente();
	Cliente(string nombre, string apellido, string direccion, string dni, string telefono);
	string getNombre();
	string getApellido();
	string getDireccion();
	string getDni();
	string getTelefono();
	TipoMembresia* getMembresia();
	//TipoMembresia* CrearMembresiaSegunTipo(Tipo tipoMembresia);
	void AnotarseMemebresia(Tipo tipoMembresia);
	//void AgregarCompra(int dia, int mes, int anio);
	~Cliente();
};

#endif