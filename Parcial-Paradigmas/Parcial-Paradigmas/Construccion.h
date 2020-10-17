#pragma once
#include "Cargo.h"
#include <iostream>
#include <vector>
using namespace std;

#ifndef CONSTRUCCION_H_
#define CONSTRUCCION_H_


class Construccion :
    public Cargo
{   
private:
    float Sueldo;
public:
    Construccion(float Sueldo);


    float CalcularSueldo();

    void  Trabajar(Nave &nNave);
};


#endif