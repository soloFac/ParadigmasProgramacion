#pragma once
#ifndef ITERADOR_H_
#define ITERADOR_H_
#include <iostream>
#include "Vector.h"

//typedef int Item;

template <class X>
class Iterador
{
private:
	const Vector<X>& vector;
	int posActual;

public:
	Iterador(const Vector<X>& v) : vector(v), posActual(0) {
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

	X elementoActual() {
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