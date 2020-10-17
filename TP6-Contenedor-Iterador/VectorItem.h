
#include <string>
#ifndef VECTORITEM_H_
#define VECTORITEM_H_
using namespace std;

template <class Item>
class VectorItem {
private:
    int capacidad;
    Item* vect; //redimensionar
    bool posicionValida(int pos);

public:
    VectorItem<Item>(int capacidad = 10);
    VectorItem<Item>(int dim, Item valor);
    VectorItem<Item>(VectorItem& p);
    ~VectorItem();

    int getCapacidad();
    Item getElemento(int pos);
    void borrarElemento(int pos);
    bool insertarElemento(int pos, Item elemento);
    bool redimensionar(int capacidad);
    void mostrarVector();

    friend class IteradorDeVector;
};
#endif 