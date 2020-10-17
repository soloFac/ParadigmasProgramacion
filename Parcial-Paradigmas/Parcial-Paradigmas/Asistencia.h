#pragma once
#include "Cargo.h"
#include <iostream>
#include <vector>
using namespace std;

#ifndef ASISTENCIA_H_
#define ASISTENCIA_H_


class Asistencia :
    public Cargo
{
private:
    float Sueldo;
public:
    Asistencia(float Sueldo);

    float CalcularSueldo();

    void  Trabajar(Nave& nNave);
};


#endif