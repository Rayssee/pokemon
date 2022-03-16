#include <SFML/Graphics.hpp>
#include "texture.hpp"


    float speed=0.25;



void deplacements(sf::Sprite &sprite_perso){
         //Gestion clavier

         


        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            sprite_perso.move(0, -speed);
        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){

            sprite_perso.move(0, speed);
        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){

            sprite_perso.move(-speed, 0);
        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){

            sprite_perso.move(speed, 0);
        }
         }
