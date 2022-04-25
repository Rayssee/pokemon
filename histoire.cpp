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
    /* Init. */
    time_t start_time = 0;
    time_t current_time = 0;

    /* Operate. */
    start_time = time(NULL);
    while(current_time-start_time+1 <= seconds) {
        current_time = time(NULL);
    }
}

        void history(){



                  if(sprite_perso.getPosition().y==0){

            sprite_perso.setPosition(560,790);
            transition.loadFromFile("images/map2.jpg");
            stransition.setTexture(transition);
            stransition.setScale(2.9,2.9);
            smap.setScale(0.f,0.f);
            j=0;


        }

        else if(sprite_perso.getPosition().y==810){
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

        else if(sprite_perso.getPosition().y==800 && j==2){
                        stransition.setScale(2.9f,2.9f);
                        smap3.setScale(0.f,0.f);
                        j=0;
                        sprite_perso.setPosition(560,310);
        }

        }


