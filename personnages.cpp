#include <SFML/Graphics.hpp>
#include "texture.hpp"
#include <iostream>

using namespace std;


    float speed=10;
    enum Dir {Down, Left, Right, Up};
sf::Vector2i anim (1, Down);
sf:: Texture personnage;
sf:: Sprite sprite_perso;
sf::View cam;
sf::Clock timer;




float fpsCount = 0, switchFps = 20, fpsSpeed = 500;
bool updateFPS = true;

void deplacements(sf::Sprite &sprite_perso){

         //Gestion clavier


         if(updateFPS)
            fpsCount  += fpsSpeed * timer.restart().asSeconds();
         else
            fpsCount = 0;

         if(fpsCount >= switchFps){

            anim.x++;
            if (anim.x * 64 >=personnage.getSize().x)
            anim.x = 0;
         }

        sprite_perso.setTextureRect(sf::IntRect (anim.x * 64 , anim.y * 64, 64, 64));


        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
                anim.y = Up;
                updateFPS = true;
            sprite_perso.move(0, -speed);


        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
                        anim.y = Down;
                        updateFPS = true;
            sprite_perso.move(0, speed);
        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
                        anim.y = Left;
                        updateFPS = true;

            sprite_perso.move(-speed, 0);
        }

                else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
                        anim.y = Right;
                        updateFPS = true;


            sprite_perso.move(speed, 0);
        }


                else{
                     updateFPS = false;
                    anim.x=0;


                }
                cout<<sprite_perso.getPosition().x<< ","<< sprite_perso.getPosition().y<<endl;
         }


         void camera(){

         if (sprite_perso.getPosition().x <= 0)
            sprite_perso.setPosition(sf::Vector2f(0, sprite_perso.getPosition().y));
            if (sprite_perso.getPosition().y <= 0)
            sprite_perso.setPosition(sf::Vector2f(sprite_perso.getPosition().x, 0));


            cam.reset(sf::FloatRect(0,0,800,600));
            sf::Vector2f position(400/*screenW / 2*/ ,300/*screenH / 2*/);
            position.x= sprite_perso.getPosition().x + (64 / 2) - (800 / 2); //32= la moitié de la taille du personnage
            position.y= sprite_perso.getPosition().y + (64 / 2) - (600 / 2);


            if(position.x < 0)
                position.x=0;
            if(position.y < 0)
                position.y=0;


                cam.reset(sf::FloatRect(position.x, position.y, 800, 600));

         }


