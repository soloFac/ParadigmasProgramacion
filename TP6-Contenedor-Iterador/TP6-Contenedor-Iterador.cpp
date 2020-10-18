// TP6-Contenedor-Iterador.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Iterador.h"
#include <iostream>


bool Pertenece(Vector& v, int elem);

int main()
{
    int elementoAct;

    Vector miVector(10,52);

    miVector.insertarElemento(5, 0);
    miVector.insertarElemento(3, 1);
    miVector.insertarElemento(1, 2);

    Iterador miIterador(miVector);

    int i = 0;
    while (i != 11)
    {
        //Solo muestro los elementos que estan contenidos en el vector
        if (miIterador.hayMasElementos())
        {
            cout << "Elemento pos[" << i << "]" << miIterador.elementoActual() << endl;
        }
        i++;
        //Muestro que sucede si se sobrepasa el limite del valor que se puede avanzar
        miIterador.avanzar();
    }

    i = 0;
    miIterador.setearPosicionAlInicio();
    while (miIterador.hayMasElementos())
    {
        cout << "Elemento pos[" << i << "]" << miIterador.elementoActual() << endl;
        i++;
        miIterador.avanzar();
    }

    if (Pertenece(miVector, 52))
    {
        cout << "El elemento 52 si pertenece" << endl;
    }
    else
    {
        cout << "El elemento 52 no pertenece" << endl;
    }

    if (Pertenece(miVector, 16))
    {
        cout << "El elemento 16 si pertenece" << endl;
    }
    else
    {
        cout << "El elemento 16 no pertenece" << endl;
    }

}


bool Pertenece(Vector& v, int elem) {
    Iterador it(v);

    while (it.hayMasElementos())
    {
        if (it.elementoActual() == elem)
        {
            return true;
        }
        it.avanzar();
    }
    return false;
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
