#pragma once
#ifndef ITERADOR_H_
#define ITERADOR_H_
#include <ratio>
#include <iostream>
#include "vector.h"

using namespace std;

class Iterador
{
	const Vector& vector;
	int posActual;
public:
	Iterador(const Vector& v) : vector(v), posActual(0) {

	}

	void setearPosicionAlInicio() {
		posActual = 0;
	}

	void avanzar() {
		if (posActual < vector.capacidad - 1)
		{
			posActual++;
		}
		else
		{
			cout << "Llego al final del vector, no se puede seguir avanzando." << endl;
		}
	}

	int elementoActual() {
		return vector.vect[posActual];
	}

	bool hayMasElementos() {
		if (posActual < vector.capacidad)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

#endif
