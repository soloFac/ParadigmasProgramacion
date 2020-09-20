#include "pelicula.cpp"
#include <iostream>
using namespace std;

int main(){
    Pelicula* nuevaPelicula = new Pelicula(251, "Los Simuladores", "Fran Schewrz", true, 25, 'N');

    nuevaPelicula->listarInformacion();

    // string s = "Hola";
    // cin >> s;

    return 0;
}