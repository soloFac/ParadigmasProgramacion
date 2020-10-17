/*
Paradigmas de programación
Grupo 12
Guido Luciano D'Arpino
Manuel Ramón Lamas
Franco Pérez de La Rosa
# Usando live share Visual Studio Code
*/
#include "vector.h"
#include <iostream>
#include <ratio>
#define indef -9999
using namespace std;


bool Vector::posicionValida(int pos) {
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

int Vector::getCapacidad() {
    return this->capacidad;
}

int Vector::getElemento(int pos) {
    if (posicionValida(pos))
    {
        return this->vect[pos];
    }
    else {
        return indef;
    }
}

void Vector::borrarElemento(int pos) {
    if (posicionValida(pos))
    {
        this->vect[pos] = indef;
    }

}

bool Vector::insertarElemento(int elemento, int pos) {
    if (posicionValida(pos)) {
        this->vect[pos] = elemento;
        return true;
    }
    else {
        return false;
    }
}

bool Vector::redimensionar(int cap) {

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

void Vector::mostrarVector() {
    int elemento;
    for (int i = 0; i < this->capacidad; i++)
    {
        elemento = this->vect[i];
        cout << "El elemento de la pos[" << i << "]" << " es: " << elemento << endl;
    }
}

Vector::Vector(int cap) {
    this->capacidad = cap;
    this->vect = new int[cap];
    // recorrer el vector y cargarlo del indef/ null(?)
    for (int i = 0; i < this->capacidad; i++)
    {
        this->vect[i] = indef;
    }
}

Vector::Vector(int dim, int valor) {
    this->capacidad = dim;
    this->vect = new int[capacidad];
    //recorrer dim veces para insertar cada valor
    for (int i = 0; i < dim; i++) {
        this->vect[i] = valor;
    }
}

Vector::Vector(Vector& p) {
    Vector aux(p.getCapacidad());
    for (int i = 0; i < this->capacidad; i++)
    {
        aux.insertarElemento(p.getElemento(i), i);
    }
}

Vector::~Vector() {
    delete[] this->vect;
}
