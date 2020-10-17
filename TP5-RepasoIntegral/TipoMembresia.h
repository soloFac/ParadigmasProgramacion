#pragma once
#ifndef TIPOMEMBRESIA_H_
#define TIPOMEMBRESIA_H_
#include "Producto.h"
#include <iostream>


using namespace std;

enum Tipo { clasica, exclusiva };

class TipoMembresia {
private:

public:
	virtual float AplicarDescuento(Producto producto) = 0;
};

#endif 