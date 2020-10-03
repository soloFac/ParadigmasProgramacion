#pragma once
#ifndef CLIENTE_H_
#define CLIENTE_H_
#include "TipoMembresia.h"
#include <iostream>

using namespace std;


class Cliente
{
private:
	string nombre;
	string apellido;
	string direccion;
	string dni;
	string telefono;
	TipoMembresia* membresia;

public:
	void AnotarseMembresia();
	void ComprarProducto();
	float CalcularDescuento();
	void RealizarCompra();
	/*
	-nombre
	- apellido
	- direccion
	- dni
	- telefono
	- dni
	+ Anotarse en alguna membresía (cambiarMembresia) : void
	+ compra productos
	+ calcular descuento
	+ Realizar compra
	*/
};

#endif