#include <SFML/Graphics.hpp>
 #include <iostream>

using namespace std;

    sf:: Texture personnage;
    sf::Sprite sprite_perso;
    float speed=0.029;


    void textureperso(){

    if(!personnage.loadFromFile("images/ethan1.png")){
            cout<<"ERROR"<<endl;
    }
        sprite_perso.setTexture(personnage);
        sprite_perso.setScale(2.f, 2.f);
        sprite_perso.setPosition(400, 300);
    }
