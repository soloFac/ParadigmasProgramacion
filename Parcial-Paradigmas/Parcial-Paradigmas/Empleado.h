#pragma once
#include "Cargo.h"
#include "Construccion.h"
#include "Asistencia.h"
#include <iostream>
#include <vector>
using namespace std;

#ifndef EMPLEADO_H_
#define EMPLEADO_H_


class Empleado
{
private:
	static int NroEmpleado;
	string Nombre;
	string Apellido;
	int Dni;
	int IdEmpleado;
	Cargo* TipoCargo;

public:
	Empleado(string Nombre, string Apellido, int dni);

	string getNombre();
	string getApellido();
	int getDni();
	int getIdEmpleado();
	Cargo* getTipoCargo();

	float CobrarSueldo();
	void AsignarCargo(Cargo* TipoCargo);

};

ostream& operator<<(ostream& message, Empleado * empleado);

#endif