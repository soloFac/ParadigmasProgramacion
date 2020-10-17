#pragma once

#include "Nave.h"
#include <iostream>
#include <vector>
using namespace std;

#ifndef CARGO_H_
#define CARGO_H_


class Cargo
{
private:
public:

	float virtual CalcularSueldo() = 0;
	void virtual Trabajar(Nave &nNave) = 0;

};


#endif