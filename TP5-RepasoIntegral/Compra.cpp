#include "Compra.h"
#include "Cliente.h"
#include <vector>
#include <memory>
using namespace std;

Compra::Compra() {
	this->fechaCompra = new Fecha;
}
Compra::Compra(Cliente* c, int dia, int mes, int anio) {
	this->cliente = c;
	this->fechaCompra = new Fecha(dia, mes, anio);
}

void Compra::AgregarProducto(Producto* p) {

	this->productos.insert(this->productos.end(), p);

}
float Compra::CalcularMonto() {

	vector<Producto*>::iterator it;
	float monto = 0;
	TipoMembresia* tMem = this->cliente->getMembresia();
	for (it = productos.begin(); it != productos.end(); ++it)
	{
		monto += tMem->AplicarDescuento((**it));
	}
	return monto;
}

Cliente Compra::getCliente() { return *(this->cliente); }

vector<Producto*> Compra::getProductos() { return productos; }

Fecha Compra::getFecha() { return *(this->fechaCompra); }


Compra::~Compra() {
}

ostream& operator<<(ostream& salida, Compra& compra) {
	salida.fill('0');
	salida << "\tFecha de compra: " << compra.getFecha() << "\nProductos: ";
	vector<Producto*>::iterator it;
	for (it = compra.getProductos().begin(); it != compra.getProductos().end(); ++it) {
		salida << *it << endl;
	}
	return salida;
}