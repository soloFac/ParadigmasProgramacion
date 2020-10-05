// TP5-RepasoIntegral.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Empresa.h"
#include "Producto.h"
#include "Compra.h"
#include "Cliente.h"

#include <iostream>


int main()
{
    //pruebo 2 clientes
    Cliente clientePrueba("Manuel", "lamas", 50.5, true);
    Cliente clientePrueba2("Pepito", "Fulano", 12.5, false);

    //pruebo 5 productos
    Producto play(123, "playstation", true, 1487.5);
    Producto xbox(145, "xbox one", true, 1800.5);
    Producto tetris(148, "Tetris!", false, 510);
    Producto pc(177, "notebook", false, 480);

    //primer cliente
    clientePrueba.agregarAlCarrito(play);
    clientePrueba.agregarAlCarrito(xbox);

    //2do cliente
    clientePrueba2.agregarAlCarrito(play);
    clientePrueba2.agregarAlCarrito(xbox);
    clientePrueba2.agregarAlCarrito(tetris);
    clientePrueba2.agregarAlCarrito(pc);

    Compra compraUno(clientePrueba, Fecha());
    Compra compraDos(clientePrueba2, Fecha());
    //esta compra no tiene elementos porque se eliminan del carrito de clientePrueba en la primera
    Compra compraTres(clientePrueba, Fecha());


    cout << "valor de la compra: " << compraUno.getMonto() << endl;
    cout << "valor de la compra: " << compraDos.getMonto() << endl;
    cout << "esta compra no se hace" << compraTres.getMonto() << endl;
    cout << play << endl;

    //Bien, que uml estan usando? oks
    // fijate en el drawio, la ultima hoja, pero le faltan cosas que aqui no puse, no es lo mio el uml

    return 0;
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
