#pragma once
#ifndef COMPRA_H_
#define COMPRA_H_
#include "Cliente.h"
#include "Producto.h"
#include "Fecha.h"
#include <vector>
#include <iostream>

class Compra
{
protected:
	Cliente* cliente;
	Fecha* fechaCompra;
	vector<Producto*> productos;
public:
	Compra();
	Compra(string nombre, string apellido, string direccion, string dni, string telefono, int dia, int mes, int anio);
	Fecha* getFecha();
	Cliente* getCliente();
	vector<Producto*> getProducto();
	void setFechaCompra(int dia, int mes, int anio);
	void setCliente(string nombre, string apellido, string direccion, string dni, string telefono);
	void AgregarProducto(int codigo, string nombre, bool importado, float precio);
	float CalcularMonto();
	~Compra();
};

#endif
