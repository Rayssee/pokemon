        #include <SFML/Graphics.hpp>
        #include <iostream>
        #include "texture.hpp"
        #include <SFML/Audio.hpp>

        using namespace std;
        sf::Music bruitdialogue2;
        sf::Texture dialogue2;
        sf:: Sprite sdialogue2;
        sf::Sprite snuage;
        sf::Texture nuage;
        sf::Texture map3;
        sf::Sprite smap3;
        sf::Texture transition;
        sf::Sprite stransition;



        int i=0;

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

                if((sprite_perso.getPosition().x >=510 && sprite_perso.getPosition().x <=610)&& (sprite_perso.getPosition().y ==30) && (sf::Keyboard::isKeyPressed(sf::Keyboard::E)))

            {
        dialogue2.loadFromFile("images/1.png");
            sdialogue2.setTexture(dialogue2);
            sdialogue2.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 390);
            sdialogue2.setScale(1.f, 0.75f);
        if (!bruitdialogue2.openFromFile("son/dialogues.ogg"));
              bruitdialogue2.setVolume(100.f);
             bruitdialogue2.play();
             speed=0;
                i++;


            }



            if(i==2){
                dialogue2.loadFromFile("images/2.png");
            sdialogue2.setTexture(dialogue2);
            sdialogue2.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 390);
            sdialogue2.setScale(1.f, 0.75f);



}
     if(i==3){

                dialogue2.loadFromFile("images/3.png");
            sdialogue2.setTexture(dialogue2);
            sdialogue2.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 390);
            sdialogue2.setScale(1.f, 0.75f);

  }
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::E) && i==4){


                dialogue2.loadFromFile("images/4.png");
            sdialogue2.setTexture(dialogue2);
            sdialogue2.setPosition(sprite_perso.getPosition().x - 370, sprite_perso.getPosition().y + 390);
            sdialogue2.setScale(1.f, 0.75f);
        if (!bruitdialogue2.openFromFile("son/receive_poke.ogg"));
              bruitdialogue2.setVolume(100.f);
             bruitdialogue2.play();
                          music.setVolume(0.f);

  }

  if(i>=5){
                        if(!nuage.loadFromFile("images/Nuage_anim.png"))
                        cout<<"ERROR"<<endl;
                        snuage.setTexture(nuage);
                        snuage.setScale(0.6f,0.6f);
                        snuage.setPosition(565, 10);

incre=2;
sstinky.setPosition(1000,1000);
speed=10;
sdialogue2.setScale(0.f,0.f);
bruitdialogue2.setVolume(0.f);
        music.setVolume(50.f);



  }

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
    stransition.setScale(0.f,0.f);
    map3.loadFromFile("images/argenta.png");
    smap3.setTexture(map3);
    smap3.setScale(2.9f,2.9f);

        }


        }


