#include <SFML/Graphics.hpp>
#include <iostream>

//#ifndef PERSONNAGE on part du principe qu'on va beaucoup y acceder à partir de plusieurs emplacement

void deplacements(sf::Sprite &sprite_perso);
void camera();
void dial();
void pause();

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



    //gestion FPS
    extern bool updateFPS;
    extern float fpsCount, switchFps, fpsSpeed500;


    //timer
    extern sf::Clock timer;



#endif



