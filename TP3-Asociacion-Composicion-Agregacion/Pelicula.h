#ifndef PELICULA_H_
#define PELICULA_H_

#include "Fecha.h"
#include <iostream>
using namespace std;

class Pelicula
{
private:
    int codigo;
    string titulo;
    string director;
    Fecha fechaEstreno;
    float precioBase;
    char tipoPelicula;

public:
    Pelicula(int codigo, string titulo, string director, float precioBase, char tipoPelicula, int dia, int mes, int anio);
    void listarInformacion();
    float calcularCosto();
    void setFecha(int dia, int mes, int anio);
    bool esEstreno();
};

#endif