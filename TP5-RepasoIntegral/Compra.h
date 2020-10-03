#pragma once
#ifndef COMPRA_H_
#define COMPRA_H_
#include "Cliente.h"
#include "Producto.h"
#include "Fecha.h"
#include "vector"
#include <iostream>

using namespace std;

class Compra
{
private:
	Cliente* cliente;
	vector<Producto*> productos;
	Fecha* fecha;
public:
	void AgregarProducto(vector<Producto*> productos);	//vector como parametro?
	void CalcularMonto(vector<Producto*> productos);
	/*-cliente
	- productos
	- fecha
	+ agregar producto
	+ calcular monto
	*/
};

#endif