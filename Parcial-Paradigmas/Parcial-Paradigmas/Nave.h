#pragma once

#include <iostream>
#include <vector>
using namespace std;

#ifndef NAVE_H_
#define NAVE_H_


class Nave
{
private:
	int codNave;
	vector<string*> componentes;

public:
	Nave(int codNave);

	void listarComponentes();
	void agregarComponentes(string * componente);
	void reemplazarComponente(int pos, string* componente);
};

#endif