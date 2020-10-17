// TP5-RepasoIntegral.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Sistema.h"
#include "Producto.h"
#include "Compra.h"
#include "Cliente.h"


int main()
{
    Sistema* s = new Sistema("");
    //    pruebo 2 clientes

    Cliente* clientePrueba = new Cliente("Manuel", "Lamas", "La Quiaca", "40215463", "381215465");
    Cliente* clientePrueba2 = new Cliente("Pepito", "Fulano", "Av Siempre Viva", "20548736", "215448773");

    clientePrueba->AnotarseMembresia(new MembresiaExclusiva());
    clientePrueba2->AnotarseMembresia(new MembresiaExclusiva());
    //pruebo 4 productos
    Producto play(123, "Playstation", true, 1487.5);
    Producto xbox(145, "Xbox One", true, 53080.5);
    Producto tetris(148, "Tetris!", false, 510);
    Producto pc(177, "Notebook", false, 48000);


    //primer cliente
    Compra* c1 = new Compra(clientePrueba, 5, 2, 2020);
    c1->AgregarProducto(&play);
    c1->AgregarProducto(&xbox);

    //    //2do cliente
    Compra* c2 = new Compra(clientePrueba2, 5, 2, 2020);
    c2->AgregarProducto(&play);
    c2->AgregarProducto(&xbox);
    c2->AgregarProducto(&pc);
    c2->AgregarProducto(&tetris);

    s->RegistrarCompra(c1);
    s->RegistrarCompra(c2);

    cout << "valor de la compra: $" << c1->CalcularMonto() << endl;
    cout << "valor de la compra: $" << c2->CalcularMonto() << endl;

    cout << play << endl;

    cout << "Recaudacion febrero: " << s->CalcularRecaudacion(2) << endl;
    cout << "Recaudacion Marzo: " << s->CalcularRecaudacion(3) << endl;



    return 0;
}
