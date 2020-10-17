#pragma once
#include <iostream>
#include "VectorItem.h"


template <class Item>
class IteradorDeVector
{
private:
	const VectorItem& vector;
	int posActual;

public:
	Iterador(const VectorItem& v) : vector(v), posActual(0) {
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

	Item elementoActual() {
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

    template <class Item>
    bool operator ==(Item x, Item y){
        
    }
};

