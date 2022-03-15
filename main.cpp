#include <SFML/Graphics.hpp>
 #include <iostream>
 #include "personnages.cpp"

using namespace std;



int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

    //j'appelle le texture.cpp dans le personnages.cpp pour les deplacements et tout ca reviens dans le main, le .hpp sert à crée ses fonctions rappelez
        deplacements();

        window.clear();
        window.draw(sprite_perso);
        window.display();
    }



    return 0;
}

