
#include <string>
#ifndef VECTOR_H_
#define VECTOR_H_
using namespace std;

class Vector {
private:
    int capacidad;
    int* vect; //redimensionar
    bool posicionValida(int pos);

public:
    Vector(int capacidad = 10);
    Vector(int dim, int valor);
    Vector(Vector& p);
    ~Vector();

    int getCapacidad();
    int getElemento(int pos);
    void borrarElemento(int pos);
    bool insertarElemento(int elemento, int pos);
    bool redimensionar(int capacidad);
    void mostrarVector();

    friend class Iterador;
};
#endif 