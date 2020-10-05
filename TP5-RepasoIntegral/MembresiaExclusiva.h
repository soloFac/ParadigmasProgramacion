#pragma once
#include "TipoMembresia.h"
class MembresiaExclusiva :
    public TipoMembresia
{
public:
    static float AplicarDescuento(Producto& producto);
};

