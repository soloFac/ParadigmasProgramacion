#pragma once
#ifndef COMPRA_H_
#define COMPRA_H_
#include "Cliente.h"
//class Cliente;
#include "Producto.h"
#include "Fecha.h"
#include "TipoMembresia.h"
#include <vector>
#include <iostream>

class Compra
{
protected:
	Fecha* fechaCompra;
	Cliente* cliente;
	vector<Producto*> productos;
public:
	Compra();
	Compra(Cliente*, int dia, int mes, int anio);
	void AgregarProducto(Producto*);
	float CalcularMonto();
<<<<<<< HEAD
	Cliente getCliente();
	vector<Producto*> getProductos();
	Fecha getFecha();
	~Compra();
};
ostream& operator<<(ostream& salida, Compra& compra);
=======
	~Compra();
};
>>>>>>> d9af8bd89e2779dd2853a5036adb5a0e7b9c2358

#endif

