#pragma once
#include "TipoMembresia.h"
class MembresiaClasica :
    public TipoMembresia
{
public:
    float AplicarDescuento(Producto *producto);

};

