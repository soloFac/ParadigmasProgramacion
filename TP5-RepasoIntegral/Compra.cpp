#include "Compra.h"
#include <vector>
using namespace std;

Compra::Compra() {
	this->cliente = new Cliente;
	this->fechaCompra = new Fecha;
}
Compra::Compra(string nombre, string apellido, string direccion, string dni, string telefono, int dia, int mes, int anio){
	this->cliente = new Cliente(nombre, apellido, direccion, dni, telefono);
	this->fechaCompra = new Fecha(dia, mes, anio);
}

Fecha* Compra::getFecha() { return fechaCompra; }
Cliente* Compra::getCliente() { return cliente; }
vector<Producto*> Compra::getProducto() { return productos; }

void Compra::setFechaCompra(int dia, int mes, int anio) {
	delete this->fechaCompra;
	this->fechaCompra = new Fecha(dia, mes, anio);
}

void Compra::setCliente(string nombre, string apellido, string direccion, string dni, string telefono) {
	delete this->cliente;
	this->cliente = new Cliente(nombre, apellido, direccion, dni, telefono);
}

void Compra::AgregarProducto(int codigo, string nombre, bool importado, float precio) {
	Producto* nuevoProducto = new Producto(codigo, nombre, importado, precio);
	this->productos.insert(this->productos.end(), nuevoProducto);
}


float Compra::CalcularMonto() {
	float monto = 0;
	vector<Producto*>::iterator it;
	for (it = productos.begin(); it != productos.end(); ++it) {
		//Aplicacion del polimorfismo
		monto += this->cliente->getMembresia()->AplicarDescuento((*it));
	}
	return monto = monto;
}
