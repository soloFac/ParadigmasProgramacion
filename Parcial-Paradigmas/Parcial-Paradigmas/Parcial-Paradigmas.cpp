// Parcial-Paradigmas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "SeccionConstruccion.h"
#include "Nave.h"
#include "Asistencia.h"
#include "Construccion.h"
#include "Empleado.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
    SeccionConstruccion* miSeccion = new SeccionConstruccion("seccion1");

    Construccion* construccion = new Construccion(2500);
    Asistencia* asistencia = new Asistencia(1500);

    Empleado* Empleado1 = new Empleado("Nicolas", "de la Rosa", 41375141);
    Empleado1->AsignarCargo(construccion);
    Empleado* Empleado2 = new Empleado("Ezequiel", "Silvera", 45289765);
    Empleado2->AsignarCargo(asistencia);
    Empleado* Empleado3 = new Empleado("Manuel", "Lizarraga", 45289765);
    Empleado3->AsignarCargo(construccion);
    Empleado* Empleado4 = new Empleado("Santiago", "Fabiano", 45289765);
    Empleado4->AsignarCargo(construccion);
    Empleado* Empleado5 = new Empleado("Susana", "Herrera", 45289765);
    Empleado5->AsignarCargo(asistencia);


    miSeccion->AgregarEmpleado(Empleado1);
    miSeccion->AgregarEmpleado(Empleado2);
    miSeccion->AgregarEmpleado(Empleado3);
    miSeccion->AgregarEmpleado(Empleado4);
    miSeccion->AgregarEmpleado(Empleado5);

    miSeccion->ListarEmpleados();


    miSeccion->ConstruirNaves();

    Nave miNave = miSeccion->getNave(1);

    miSeccion->RepararNave(miNave);

    miNave.listarComponentes();

    cout << Empleado1 << endl;
    cout << Empleado2 << endl;
    cout << Empleado3 << endl;
    cout << Empleado4 << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
