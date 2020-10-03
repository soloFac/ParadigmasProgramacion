#pragma once
#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include "Compra.h"
#include <iostream>

using namespace std;

class Producto
{

private:
	int codigo;	//static?
	string nombre;
	bool importado;
	float precio;
public:
	bool EsImportado();
	float getPrecio();
	float CalcularRecaudacion(string mes);
	void Registrar(Compra compra);
	/*
	codigo
	nombre
	importado
	precio
	+ es importado?
	+ get precio?
	+ calcular recaudacion(mes)
	+ registrar (compra)
	*/
};

#endif