
#ifndef VECTOR_H_
#define VECTOR_H_
#include <string>
#include <iostream>
#define indef -9999


using namespace std;


template <class Item>
class Vector {
private:
    typedef Item X;
    int capacidad;
    Item* vect; //redimensionar
    bool posicionValida(int pos);

public:
    Vector(int capacidad = 10);
    Vector(int dim, Item valor);
    Vector(Vector& p);
    ~Vector();

    int getCapacidad();
    Item getElemento(int pos);
    void borrarElemento(int pos);
    bool insertarElemento(int pos, Item elemento);
    bool redimensionar(int capacidad);
    void mostrarVector();

    friend class Iterador;
};



template <class Item>
Vector<Item>::Vector(int cap) {
    this->capacidad = cap;
    this->vect = new array[cap];
    // recorrer el vector y cargarlo del indef/ null(?)
    for (int i = 0; i < this->capacidad; i++)
    {
        this->vect[i] = NULL;
    }
}

template <class Item>
Vector<Item>::Vector(int dim, Item valor) {
    this->capacidad = dim;
    this->vect = new Item[capacidad];
    //recorrer dim veces para insertar cada valor
    for (int i = 0; i < dim; i++) {
        this->vect[i] = valor;
    }
}

template <class Item>
Vector<Item>::Vector(Vector& p) {

    Vector<Item> aux(p.getCapacidad());
    for (int i = 0; i < this->capacidad; i++)
    {
        aux.insertarElemento(i, p.getElemento(i));
    }
}

template <class Item>
Vector<Item>::~Vector<Item>() {
    delete[] this->vect;
}

template <class Item>
bool Vector<Item>::posicionValida(int pos) {
    if (pos >= 0 && pos < this->capacidad)
    {
        return true;
    }
    else
    {
        cout << "La posicion no es valida" << endl;
        return false;
    }
}

template <class Item>
int Vector<Item>::getCapacidad() {
    return this->capacidad;
}

template <class Item>
Item Vector<Item>::getElemento(int pos) {
    if (posicionValida(pos))
    {
        return this->vect[pos];
    }
    else {
        return NULL;
    }
}

template <class Item>
void Vector<Item>::borrarElemento(int pos) {
    if (posicionValida(pos))
    {
        this->vect[pos] = NULL;
    }

}

template <class Item>
bool Vector<Item>::insertarElemento(int pos, Item elemento) {
    if (posicionValida(pos)) {
        this->vect[pos] = elemento;
        return true;
    }
    else {
        return false;
    }
}

template <class Item>
bool Vector<Item>::redimensionar(int nuevaCap) {

    if (nuevaCap > this->capacidad) {
        Vector<Item>* aux = new array(nuevaCap); // crear un nuv aux 

        if (&aux == NULL) {
            return false;
        }

        for (int i = 0; i < this->capacidad; i++)
        {
            aux->insertarElemento(this->getElemento(i), i);
        }
        this->capacidad = nuevaCap;
        this->vect = aux->vect;
    }
    else
    {
        this->capacidad = nuevaCap;
    }
    return true;
}

template <class Item>
void Vector<Item>::mostrarVector() {
    Item elemento;
    for (int i = 0; i < this->capacidad; i++)
    {
        elemento = this->vect[i];
        cout << "El elemento de la pos[" << i << "]" << " es: " << elemento << endl;
    }
}


template <class Item>
bool operator ==(Item x, Item y) {
    return (x == y);
}

#endif 