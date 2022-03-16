#include <SFML/Graphics.hpp>
#include "texture.hpp"


    float speed=0.05;
    enum Dir {Down, Left, Right, Up};
sf::Vector2i anim (1, Down);
 sf:: Texture personnage;
     sf:: Sprite sprite_perso;


void deplacements(sf::Sprite &sprite_perso){

         //Gestion clavier
           sf::Clock time;
           float fpsCount = 0, switchFps=100, fpsSpeed=500;
                bool updateFps = true;


           if(updateFps)
                fpsCount += fpsSpeed * time.restart().asSeconds();

           else;
            fpsCount = 0;

           if(fpsCount >= switchFps){

          anim.x++;
        if (anim.x * 64 >=personnage.getSize().x)
            anim.x = 0;
           }


        sprite_perso.setTextureRect(sf::IntRect (anim.x * 64, anim.y * 64, 64, 64));


        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
                anim.y = Up;
            sprite_perso.move(0, -speed);
        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
                        anim.y = Down;

            sprite_perso.move(0, speed);
        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
                        anim.y = Left;

            sprite_perso.move(-speed, 0);
        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
                        anim.y = Right;

            sprite_perso.move(speed, 0);
        }
         }
