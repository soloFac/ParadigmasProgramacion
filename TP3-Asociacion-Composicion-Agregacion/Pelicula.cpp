#include "Pelicula.h"
#include "pelicula.h"
#include <iostream>

using namespace std;

Pelicula::Pelicula(int codigo, string titulo, string director, float precioBase, char tipoPelicula, int dia, int mes, int anio) : fechaEstreno(dia, mes, anio){
    this->codigo = codigo;
    this->titulo = titulo;
    this->director = director;
    this->precioBase = precioBase;
    this->tipoPelicula = tipoPelicula;
}

//Pelicula::setFecha(int dia, int mes, int anio) : fechaEstreno(dia, mes, anio) {
//};

float Pelicula::calcularCosto() {
    float costo = this->precioBase;

    if (this->tipoPelicula == 'I')
    {
        costo = this->precioBase * 1.30;
    }
    else if (this->tipoPelicula == 'N')
    {
        if (this->esEstreno() == false)
        {
            costo = this->precioBase * 0.8;
        }
    }
    return costo;
}



void Pelicula::listarInformacion() {
    cout << "Codigo: " << this->codigo << endl;
    cout << "Titulo: " << this->titulo << endl;
    cout << "Director: " << this->director << endl;
    cout << "Estreno: " << this->fechaEstreno << endl;
    cout << "Precio base: $" << this->precioBase << endl;
    if (this->tipoPelicula == 'I')
    {
        cout << "Tipo de pelicula: Internacional" << endl;
    }
    else if (this->tipoPelicula == 'N')
    {
        cout << "Tipo de pelicula: Nacional" << endl;
    }
}