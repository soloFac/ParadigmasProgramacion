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
	vector<Compra*> compra;
	vector<Producto*> producto;
	vector<Cliente*> cliente;

public:
	Sistema(string nombre);
	float CalcularRecaudacion(int mes);
	bool RegistrarCompra(string nombre, string apellido, string direccion, string dni, string telefono, int dia, int mes, int anio);
	bool RegistrarProducto(int codigo, string nombre, bool importado, float precio);
	bool RegistrarCliente(string nombre, string apellido, string direccion, string dni, string telefono);
	/*+calcular recaudacion(mes)
	+registrar(compra)*/
};

#endif

