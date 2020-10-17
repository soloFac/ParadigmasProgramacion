#pragma once
#ifndef SISTEMA_H_
#define SISTEMA_H_
#include "Compra.h"
#include "Producto.h"
#include "Cliente.h"

#include<vector>
#include<iostream>

using namespace std;


class Sistema
{
private:
	string nombreEmpresa;
	vector<Compra*> compras;

public:
	Sistema(string nombre);
	float CalcularRecaudacion(int mes);
<<<<<<< HEAD
	bool RegistrarCompra(Compra*);
=======
	bool RegistrarCompra(string nombre, string apellido, string direccion, string dni, string telefono, int dia, int mes, int anio);
	bool RegistrarProducto(int codigo, string nombre, bool importado, float precio);
	bool RegistrarCliente(string nombre, string apellido, string direccion, string dni, string telefono);
	/*+calcular recaudacion(mes)
	+registrar(compra)*/
>>>>>>> d9af8bd89e2779dd2853a5036adb5a0e7b9c2358
	~Sistema();
};

#endif
