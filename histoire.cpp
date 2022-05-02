        #include <SFML/Graphics.hpp>
        #include <iostream>
        #include "texture.hpp"
        #include <SFML/Audio.hpp>

        using namespace std;

        sf::Sprite snuage;
        sf::Texture nuage;
        sf::Texture map3;
        sf::Sprite smap3;
        sf::Texture transition;
        sf::Sprite stransition;




        void sleep(int seconds) {

    time_t start_time = 0;
    time_t current_time = 0;

    start_time = time(NULL);
    while(current_time-start_time+1 <= seconds) {
        current_time = time(NULL);
    }
}

        void history(){


        if(j==-1|| j==-2){
            sstinky.setScale(0.f,0.f);
        }
        else if(j==1){
    sstinky.setScale(0.4f, 0.4f);
        }



               if((sprite_perso.getPosition().x>=220 && (sprite_perso.getPosition().x<=270)) &&  (sprite_perso.getPosition().y==150) && j==-1){
                schambre.setScale(0.f, 0.f);
                j=-2;
                salon.loadFromFile("images/image_maison_2.jpg");
            ssalon.setTexture(salon);
            ssalon.setScale(2.f, 2.f);
            sprite_perso.setPosition(250,170);

        }

                    if((sprite_perso.getPosition().x>=220 && (sprite_perso.getPosition().x<=270)) &&  (sprite_perso.getPosition().y==140) && j==-2){
                        ssalon.setScale(0.f, 0.f);
                        schambre.setScale(2.f, 2.f);
                        sprite_perso.setPosition(250, 170);
                        j=-1;
                    }

        if((sprite_perso.getPosition().x>=160 && (sprite_perso.getPosition().x<=260)) &&  (sprite_perso.getPosition().y==520) && j==-2){

            ssalon.setScale(0.f, 0.f);
            smap.setScale(2.9f, 2.9f);
            j=1;
            sprite_perso.setPosition(680,300);
        }

                  if(sprite_perso.getPosition().y==0){

            sprite_perso.setPosition(560,790);
            transition.loadFromFile("images/map2.jpg");
            stransition.setTexture(transition);
            stransition.setScale(2.9,2.9);
            smap.setScale(0.f,0.f);
            j=0;


        }

        else if(sprite_perso.getPosition().y==810 && j==0){
                        smap.setScale(2.9f,2.9f);
                        stransition.setScale(0.,0.);
                        j=1;
                        sprite_perso.setPosition(560,20);
        }

        else if(j==0 && (sprite_perso.getPosition().y == 320 && sf::Keyboard::isKeyPressed(sf::Keyboard::E))){

    j=2;
    stransition.setScale(0.f,0.);
    map3.loadFromFile("images/argenta.png");
    smap3.setTexture(map3);
    smap3.setScale(2.9f,2.9f);
    sprite_perso.setPosition(610, 790);

        }

        else if((sprite_perso.getPosition().y==810) && (sprite_perso.getPosition().x>=490) && (sprite_perso.getPosition().x<=540) && j==2){
                        stransition.setScale(2.9f,2.9f);
                        smap3.setScale(0.f,0.f);
                        j=0;
                        sprite_perso.setPosition(560,310);
        }
        }



