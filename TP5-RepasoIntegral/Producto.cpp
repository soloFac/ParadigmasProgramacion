#include "Producto.h"
#include <string>
#include <iomanip>
using namespace std;

Producto::Producto(int codigo, string nombre, bool importado, float precio) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->importado = importado;
	this->precio = precio;
}

int Producto::getCodigo() { return codigo; }
string Producto::getNombre() { return nombre; }
bool Producto::esImportado() { return importado; }
float Producto::getPrecio() { return precio; }


ostream& operator<<(ostream& salida, Producto& Prod) {
	salida.fill('0');
	string imported;
	if (Prod.esImportado())
	{
		imported = "SI";
	}
	else
	{
		imported = "NO";
	}

	salida << "Codigo: " << Prod.getCodigo() << "\nNombre: " << Prod.getNombre() << "\nImportado; " << imported << "\nPrecio: $" << Prod.getPrecio();
	
	return salida;
}