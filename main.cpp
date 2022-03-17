#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "texture.hpp"
#include <time.h>


using namespace std;


    sf::Music music;
    sf::Texture menu;
    sf::Sprite smenu;
    bool check=false;

void texture(){

    if(!menu.loadFromFile("images/menu-1.png"))
            cout<<"ERROR"<<endl;
    smenu.setTexture(menu);

    if(!personnage.loadFromFile("images/spritev2p1.png"))
            cout<<"ERROR"<<endl;
    sprite_perso.setTexture(personnage);
    sprite_perso.setScale(2.f, 2.f);
    sprite_perso.setPosition(400, 300);


}







void audio(){

         if (!music.openFromFile("son/ville.ogg"))
      cout<<"ERROR"<<endl; // erreur

             music.play();
}
int main()
{

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
        sf::Clock time;
            texture();
           // audio();




           while (window.isOpen())
        {
            while (check == false)
            {
                window.clear();
                window.draw(smenu);
                window.display();

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))

                    check = true;

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                    return EXIT_SUCCESS;
            }

}




    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

    //j'appelle le texture.cpp dans le personnages.cpp pour les deplacements et tout ca reviens dans le main, le .hpp sert à crée ses fonctions rappelez
        deplacements(sprite_perso);

        window.clear();
        window.draw(sprite_perso);
        window.display();
    }

    return 0;
}

