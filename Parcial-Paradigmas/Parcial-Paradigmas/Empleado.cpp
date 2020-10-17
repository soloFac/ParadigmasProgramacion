#include "Empleado.h"

int Empleado::NroEmpleado = 0;

Empleado::Empleado(string Nombre, string Apellido, int Dni) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Dni = Dni;
	this->IdEmpleado = ++Empleado::NroEmpleado;
}

string Empleado::getNombre() {
	return this->Nombre;
}
string Empleado::getApellido() {
	return this->Apellido;
}
int Empleado::getDni() {
	return this->Dni;
}
int Empleado::getIdEmpleado() {
	return this->IdEmpleado;
}

float Empleado::CobrarSueldo() {
	
	return TipoCargo->CalcularSueldo();
}

Cargo* Empleado::getTipoCargo() {
	return TipoCargo;
}

void Empleado::AsignarCargo(Cargo *TipoCargo) {
	this->TipoCargo = TipoCargo;
}


 ostream& operator<<(ostream& message, Empleado * empleado) {
	
	message << "\nId: " << empleado->getIdEmpleado() << "\nNombre: " << empleado->getNombre() << "\nApellido: " 
		<< empleado->getApellido() << "\nDni: " << empleado->getDni();

	return message;
}