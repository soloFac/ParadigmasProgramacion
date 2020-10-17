#pragma once

#include "Nave.h"
#include "Empleado.h"
#include "Cargo.h"
#include <iostream>
#include <vector>
using namespace std;

#ifndef SECCIONCONSTRUCCION_H_
#define SECCIONCONSTRUCCION_H_


class SeccionConstruccion
{
private:
	string idSeccion;
	vector <Empleado*> empleados;
	vector <Nave*> naves;

public:
	SeccionConstruccion(string idSeccion);


	void AgregarEmpleado(Empleado* empleado);
	void ListarEmpleados();
	void ConstruirNaves();
	void RepararNave(Nave &nNave);
	Nave getNave(int pos);

	~SeccionConstruccion();
};

#endif