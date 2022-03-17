#include <SFML/Graphics.hpp>
#include <iostream>

//#ifndef PERSONNAGE on part du principe qu'on va beaucoup y acceder à partir de plusieurs emplacement

void deplacements(sf::Sprite &sprite_perso);

#ifndef PERSONNAGE
#define PERSONNAGE

     extern sf:: Texture personnage;
    extern sf:: Sprite sprite_perso;

    //gestion FPS
    extern bool updateFPS;
    extern float fpsCount, switchFps, fpsSpeed500;


    //timer
    extern sf::Clock timer;



#endif



