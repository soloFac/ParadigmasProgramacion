#include "MembresiaExclusiva.h"

float MembresiaExclusiva::AplicarDescuento(Producto producto) {
	if (producto.esImportado() && producto.getPrecio() > 1500)
	{
		return (producto.getPrecio() * 0.8);
	}
	else
	{
		return producto.getPrecio();
	}

}