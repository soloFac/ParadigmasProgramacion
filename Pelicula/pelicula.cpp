#include <iostream>
#include "pelicula.h"

using namespace std;

Pelicula::Pelicula(int codigo, string titulo, string director, bool estreno, float precioBase, char tipoPelicula){
    this->codigo = codigo;
    this->titulo = titulo;
    this->director = director;
    this->precioBase = precioBase;
    this->tipoPelicula = tipoPelicula;
}

float Pelicula::calcularCosto(){
    float costo = this->precioBase;

    if (this->tipoPelicula == 'I')
    {
        costo = costo * 1.30;
    }else if (this->tipoPelicula == 'N')
    {
        if (this->esEstreno() == false)
        {
            costo = costo * 0.8;
        }
    }
    return costo;
}

void Pelicula::listarInformacion(){
    cout << "Codigo: "<< this->codigo << endl;
    cout << "Titulo: "<< this->titulo << endl;
    cout << "Director: "<< this->director << endl;
    cout << "Estreno: "<< this->fechaEstreno << endl;
    cout << "Precio base: $"<< this->precioBase << endl;
    if (this->tipoPelicula == 'I')
    {
        cout << "Tipo de pelicula: Internacional" << endl;
    }else if (this->tipoPelicula == 'N')
    {
        cout << "Tipo de pelicula: Nacional" << endl;
    }
}