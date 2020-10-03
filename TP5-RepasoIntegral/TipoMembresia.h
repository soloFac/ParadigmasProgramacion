#pragma once
#ifndef TIPOMEMBRESIA_H_
#define TIPOMEMBRESIA_H_
#include<iostream>

using namespace std;

class TipoMembresia		//Clase Abstracta
{
private:
	string nombreMembresia;
public:
	string getNombre();
	float CalcularDescuento();
};

#endif