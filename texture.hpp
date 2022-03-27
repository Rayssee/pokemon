#include <SFML/Graphics.hpp>
#include <iostream>

//#ifndef PERSONNAGE on part du principe qu'on va beaucoup y acceder à partir de plusieurs emplacement

void deplacements(sf::Sprite &sprite_perso);
void camera();
void dial();
void pause();
void menupoke();

#ifndef PERSONNAGE
#define PERSONNAGE

     extern sf:: Texture personnage;
    extern sf:: Sprite sprite_perso;
    extern int screenW, screenH;
    extern sf::View cam;
    extern sf::Texture dialogue;
    extern sf::Sprite sdialogue;
    extern float speed;
    extern sf::Sprite smap;
    extern sf::Vector2f positions;
    extern sf::View cam;



    //gestion FPS
    extern bool updateFPS;
    extern float fpsCount, switchFps, fpsSpeed;


    //timer
    extern sf::Clock timer;



#endif



