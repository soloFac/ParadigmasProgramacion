#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <string>
#include <iostream>

using namespace std;

class Producto {
private:
	int codigo;
	string nombre;
	bool importado;
	float precio;
public:
	Producto(int codigo, string nombre, bool importado, float precio);
	int getCodigo();
	string getNombre();
	bool esImportado();
	float getPrecio();
};

ostream& operator<<(ostream& salida, Producto& Prod);

#endif