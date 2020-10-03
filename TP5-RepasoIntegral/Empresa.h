#pragma once
#ifndef EMPRESA_H_
#define EMPRESA_H_
#include "Compra.h"
#include<iostream>

using namespace std;


class Empresa
{
private:
	string nombreEmpresa;
public:
	float calcularRecaudacion(string mes);
	void Registrar(Compra _compra);
	/*+calcular recaudacion(mes)
	+registrar(compra)*/
};

#endif