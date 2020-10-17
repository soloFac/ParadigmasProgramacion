/*
Paradigmas de programaci�n
Grupo 12
Guido Luciano D'Arpino
Manuel Ram�n Lamas
Franco P�rez de La Rosa
# Usando live share Visual Studio Code
*/
#include "VectorItem.h"
#include <iostream>
#include <ratio>
#define indef -9999
using namespace std;

template <class Item>
VectorItem<Item>::VectorItem<Item>(int dim, int valor) {
    this->capacidad = dim;
    this->vect = new int[capacidad];
    //recorrer dim veces para insertar cada valor
    for (int i = 0; i < dim; i++) {
        this->vect[i] = valor;
    }
}

template <class Item>
VectorItem<Item>::VectorItem<Item>(VectorItem& p) {
    Vector aux(p.getCapacidad());
    for (int i = 0; i < this->capacidad; i++)
    {
        aux.insertarElemento(p.getElemento(i), i);
    }
}

template <class Item>
VectorItem<Item>::~VectorItem<Item>() {
    delete[] this->vect;
}

template <class Item>
bool VectorItem<Item>::posicionValida(int pos) {
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
int VectorItem<Item>::getCapacidad() {
    return this->capacidad;
}

template <class Item>
Item VectorItem<Item>::getElemento(int pos) {
    if (posicionValida(pos))
    {
        return this->vect[pos];
    }
    else {
        return indef;
    }
}

template <class Item>
void VectorItem<Item>::borrarElemento(int pos) {
    if (posicionValida(pos))
    {
        this->vect[pos] = indef;
    }

}

template <class Item>
bool VectorItem<Item>::insertarElemento(int pos, Item elemento) {
    if (posicionValida(pos)) {
        this->vect[pos] = elemento;
        return true;
    }
    else {
        return false;
    }
}

template <class Item>
bool VectorItem<Item>::redimensionar(int cap) {

    if (cap > this->capacidad) {
        Vector* aux = new Vector(cap); // crear un nuv aux 

        if (&aux == NULL) {
            return false;
        }

        for (int i = 0; i < this->capacidad; i++)
        {
            aux->insertarElemento(this->getElemento(i), i);
        }
        this->capacidad = cap;
        this->vect = aux->vect;
    }
    else
    {
        this->capacidad = cap;
    }
    return true;
}

template <class Item>
void VectorItem<Item>::mostrarVector() {
    int elemento;
    for (int i = 0; i < this->capacidad; i++)
    {
        elemento = this->vect[i];
        cout << "El elemento de la pos[" << i << "]" << " es: " << elemento << endl;
    }
}

template <class Item>
VectorItem<Item>::VectorItem<Item>(int cap) {
    this->capacidad = cap;
    this->vect = new int[cap];
    // recorrer el vector y cargarlo del indef/ null(?)
    for (int i = 0; i < this->capacidad; i++)
    {
        this->vect[i] = indef;
    }
}
