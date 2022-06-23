//feliz = 1, triste = 2, achicopalado = 3, muerto = 4
#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>


class Poop {
public:
	sf::RenderWindow window;
	Poop();
	void printFeliz();
	void printTriste();
	void printEnojado();
	void printMuerto();
};