#include <SFML/Graphics.hpp>
#include "texture.cpp"

void deplacements(){
         //Gestion clavier

         textureperso();


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
