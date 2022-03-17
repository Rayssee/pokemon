#include <SFML/Graphics.hpp>
#include "texture.hpp"
#include <iostream>

int a=1;
sf::Music bruitdialogue;
using namespace std;

void dial(){
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::E) && (sprite_perso.getPosition().x == 680 && sprite_perso.getPosition().y == 300)){

        dialogue.loadFromFile("images/dialogue.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;
       if (!bruitdialogue.openFromFile("son/dialogue.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(350.f);

             bruitdialogue.play();


}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)){

a++;

if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}
}
