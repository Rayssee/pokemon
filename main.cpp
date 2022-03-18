#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "texture.hpp"

using namespace std;


    sf::Music music;
    sf::Texture menu;
    sf::Sprite smenu;
    sf::Texture mapping;
    sf::Sprite smap;
    sf::Texture dialogue;
    sf::Sprite sdialogue;
    bool check=false;
    int screenH=600;
    int screenW=800;

void texture(){

    if(!menu.loadFromFile("images/menu-1.png"))
            cout<<"ERROR"<<endl;
    smenu.setTexture(menu);
    smenu.setScale(0.9f, 1.1f);




    if(!personnage.loadFromFile("images/spritev2p1.png"))
            cout<<"ERROR"<<endl;
    sprite_perso.setTexture(personnage);
    sprite_perso.setScale(1.3f, 1.3f);
    sprite_perso.setPosition(680, 300);

     if(!mapping.loadFromFile("images/bourgp.png"))
            cout<<"ERROR"<<endl;
    smap.setTexture(mapping);
        smap.setScale(2.9f, 2.9f);

}

void audio(){

         if (!music.openFromFile("son/ville.ogg"))
      cout<<"ERROR"<<endl; // erreur

             music.play();
}
int main()
{

    sf::RenderWindow window(sf::VideoMode(screenW, screenH), "Pokemon version Or!");
        window.setFramerateLimit(15);


            texture();

            while (check == false)
            {
                window.clear();
                window.draw(smenu);
                window.display();

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))


                    check = true;
                    audio();

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                    return EXIT_SUCCESS;
            }


    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

    //j'appelle le texture.cpp dans le personnages.cpp pour les deplacements et tout ca reviens dans le main, le .hpp sert � cr�e ses fonctions rappelez
        deplacements(sprite_perso);
        camera();
        dial();


        window.clear();
        window.draw(smap);
        window.draw(sdialogue);
        window.draw(sprite_perso);
        window.setView(cam);
        window.display();
    }

    return 0;
}

