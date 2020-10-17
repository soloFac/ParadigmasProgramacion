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
	bool RegistrarCompra(Compra*);
	~Sistema();
};

#endif
