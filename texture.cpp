#include <SFML/Graphics.hpp>
 #include <iostream>

using namespace std;

#include "texture.hpp"

    


    void textureperso(sf::Sprite *sprite_perso){

    sf:: Texture personnage;
    std::cout << "test";
    if(!personnage.loadFromFile("images/ethan1.png")){
            cout<<"ERROR"<<endl;
    }
        sprite_perso->setTexture(personnage);
        sprite_perso->setScale(2.f, 2.f);
        sprite_perso->setPosition(400, 300);
    }

