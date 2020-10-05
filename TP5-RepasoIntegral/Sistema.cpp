#include "Sistema.h"

Sistema::Sistema(string nombre = "indefinido") {
	this->nombreEmpresa = nombre;
}

bool Sistema::RegistrarProducto(int codigo, string nombre, bool importado, float precio) {
	Producto* producto = new Producto(codigo, nombre, importado, precio);
	this->producto.insert(this->producto.end(), producto);

	return true;
}

bool Sistema::RegistrarCompra(string nombre, string apellido, string direccion, string dni, string telefono, int dia, int mes, int anio) {
	Compra* compra = new Compra(nombre, apellido, direccion, dni, telefono, dia, mes, anio);
	this->compra.insert(this->compra.end(), compra);

	return true;
}

bool Sistema::RegistrarCliente(string nombre, string apellido, string direccion, string dni, string telefono) {
	Cliente* cliente = new Cliente(nombre, apellido, direccion, dni, telefono);
	this->cliente.insert(this->cliente.end(), cliente);

	return true;
}

float Sistema::CalcularRecaudacion(int mes) {
	float recaudacion = 0;
	vector<Compra*>::iterator it;
	for (it = compra.begin(); it < compra.end(); ++it)
	{
		if ((*it)->getFecha()->getMes() == mes)
		{
			recaudacion += (*it)->CalcularMonto();
		}
	}
	return recaudacion;
}