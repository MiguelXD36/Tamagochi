#pragma once
#include "Poop.h"
#include <SFML/Graphics.hpp>

class Display{
public:
	Poop cosa;
	int estadoInicial = 1;
	int estadoFinal;
	void alimentar();
	void pegar();
	void bañar();
	void ejercitar();
	void imprimirCosa();
};