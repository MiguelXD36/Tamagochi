#include "Display.h"
#include <iostream>
using namespace std;

void Display::alimentar() {
	switch (estadoInicial) {
	case 1:
		cosa.printFeliz();
		estadoInicial = 1;
		break;
	case 2:
		cosa.printTriste();
		estadoInicial = 1;
		break;
	case 3:
		cosa.printEnojado();
		estadoInicial = 1;
	case 4:
		cosa.printMuerto();
		estadoInicial = 4;
	}
}

void Display::pegar() {
	switch (estadoInicial) {
	case 1:
		cosa.printTriste();
		estadoInicial = 2;
		break;
	case 2:
		cosa.printEnojado();
		estadoInicial = 3;
		break;
	case 3:
		cosa.printMuerto();
		estadoInicial = 4;
	case 4:
		cosa.printMuerto();
		estadoInicial = 4;
	}
}

void Display::bañar() {
	switch (estadoInicial) {
	case 1:
		cosa.printFeliz();
		estadoInicial = 1;
		break;
	case 2:
		cosa.printTriste();
		estadoInicial = 2;
		break;
	case 3:
		cosa.printTriste();
		estadoInicial = 2;
	case 4:
		cosa.printMuerto();
		estadoInicial = 4;
	}
}

void Display::ejercitar() {
	switch (estadoInicial) {
	case 1:
		cosa.printFeliz();
		estadoInicial = 1;
		break;
	case 2:
		cosa.printFeliz();
		estadoInicial = 1;
		break;
	case 3:
		cosa.printEnojado();
		estadoInicial = 3;
	case 4:
		cosa.printMuerto();
		estadoInicial = 4;
	}
}

void Display::imprimirCosa() {
	sf::RenderWindow window(sf::VideoMode(620, 405),
		"Playing Tamagotchi.");

	sf::Texture FelizTexture;
	FelizTexture.loadFromFile("Feliz.png");
	sf::Sprite FelizPoop(FelizTexture);
	FelizPoop.setOrigin(626, 402);

	sf::Texture TristeTexture;
	TristeTexture.loadFromFile("Triste.png");
	sf::Sprite TristePoop(TristeTexture);
	TristePoop.setOrigin(313, 201);

	sf::Texture EnojadoTexture;
	EnojadoTexture.loadFromFile("Enojado.png");
	sf::Sprite EnojadoPoop(EnojadoTexture);
	EnojadoPoop.setOrigin(313, 201);

	sf::Texture MuertoTexture;
	MuertoTexture.loadFromFile("Muerto.png");
	sf::Sprite MuertoPoop(MuertoTexture);
	MuertoPoop.setOrigin(313, 201);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
				cout << "Precionaste a" << endl;
				alimentar();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
				cout << "Precionaste s" << endl;
				bañar();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				cout << "Precionaste d" << endl;
				pegar();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::F)) {
				cout << "Precionaste f" << endl;
				ejercitar();
			}
		}
	}
}

