#include"Poop.h"
#include<cstdlib>
#include <iostream>

using namespace std;

Poop::Poop() {
   

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

    sf::RenderWindow window(sf::VideoMode(620, 405),
        "Playing Tamagotchi.");
}

void Poop::printFeliz()
{
    sf::Texture FelizTexture;
    FelizTexture.loadFromFile("Feliz.png");
    sf::Sprite FelizPoop(FelizTexture);
    FelizPoop.setOrigin(626, 402);

    FelizPoop.setOrigin(0, 0);
    window.clear(sf::Color(255, 255, 255, 255));
    window.draw(FelizPoop); 
    window.display();
}

void Poop::printTriste()
{
    sf::Texture TristeTexture;
    TristeTexture.loadFromFile("Triste.png");
    sf::Sprite TristePoop(TristeTexture);
    TristePoop.setOrigin(313, 201);

    TristePoop.setOrigin(0, 0);
    window.clear(sf::Color(16, 16, 16, 255)); 
    window.draw(TristePoop); 
    window.display();
}

void Poop::printEnojado()
{
    sf::Texture EnojadoTexture;
    EnojadoTexture.loadFromFile("Enojado.png");
    sf::Sprite EnojadoPoop(EnojadoTexture);
    EnojadoPoop.setOrigin(313, 201);

    EnojadoPoop.setOrigin(0, 0);
    window.clear(sf::Color(16, 16, 16, 255)); 
    window.draw(EnojadoPoop); 
    window.display();
}

void Poop::printMuerto()
{
    sf::Texture MuertoTexture;
    MuertoTexture.loadFromFile("Muerto.png");
    sf::Sprite MuertoPoop(MuertoTexture);
    MuertoPoop.setOrigin(313, 201);

    MuertoPoop.setOrigin(0, 0);
    window.clear(sf::Color(16, 16, 16, 255)); 
    window.draw(MuertoPoop); 
    window.display();
}
