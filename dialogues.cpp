#include <SFML/Graphics.hpp>
#include "texture.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int a=1;
sf::Music bruitdialogue;
using namespace std;

void s_sleep(int seconds) {
    /* Init. */
    time_t start_time = 0;
    time_t current_time = 0;

    /* Operate. */
    start_time = time(NULL);
    while(current_time-start_time+1 <= seconds) {
        current_time = time(NULL);
    }
}

void dial(){

if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)){
a++;
if (sprite_perso.getPosition().x == 680 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/boumaaz.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;


       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}

}


if (sprite_perso.getPosition().x == 260 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/minart.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 260, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}

if (sprite_perso.getPosition().x == 590 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/dialogueboite1.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();

if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}

if (sprite_perso.getPosition().x == 170 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/dialogueboite1.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 170, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}


}

if (sprite_perso.getPosition().x == 400 && sprite_perso.getPosition().y == 490){

        dialogue.loadFromFile("images/fleurdialogue.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}
if (sprite_perso.getPosition().x == 210 && sprite_perso.getPosition().y == 620){

        dialogue.loadFromFile("images/dtexte.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 210, sprite_perso.getPosition().y + 112);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}

if (sprite_perso.getPosition().x == 720 && sprite_perso.getPosition().y == 580){

        dialogue.loadFromFile("images/alan.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 408, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}
if (sprite_perso.getPosition().x == 580 && sprite_perso.getPosition().y == 300){

        dialogue.loadFromFile("images/dialogueboite1.png");
    sdialogue.setTexture(dialogue);
    sdialogue.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 150);
    sdialogue.setScale(1.f, 0.75f);
    speed=0;



       if (!bruitdialogue.openFromFile("son/dialogues.ogg"))
      cout<<"ERROR"<<endl; // erreur
      bruitdialogue.setVolume(100.f);

             bruitdialogue.play();




if(a%2==0){
    sdialogue.setScale(1.f, 0.f);
    speed=10;
}
}


}
}
















