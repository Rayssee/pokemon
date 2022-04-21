#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cmath>
#include <vector>
#include "texture.hpp"


using namespace std;

    bool check=false;
    int screenH=600;
    int screenW=800;
    int b=1;
    int det=0;
    bool check2=false;
    int offsetX =32, offsetY=32;

//sf::RectangleShape maison1(sf::Vector2f(120.f, 50.f));

    sf::Music music;
    sf::Texture menu;
    sf::Sprite smenu;
    sf::Texture mapping;
    sf::Sprite smap;
    sf::Texture dialogue;
    sf::Sprite sdialogue;
    sf::Texture pauses;
    sf::Sprite spause;
    sf::Texture pause2;
    sf::Sprite spause2;
    sf::Texture stinky;
    sf::Sprite sstinky;





void texture(){

    if(!menu.loadFromFile("images/menu-1.png"))
            cout<<"ERROR"<<endl;
    smenu.setTexture(menu);
    smenu.setScale(0.9f, 1.1f);




    if(!personnage.loadFromFile("images/spritev2p1.png"))
            cout<<"ERROR"<<endl;
    sprite_perso.setTexture(personnage);
    sprite_perso.setScale(1.3f, 1.3f);
    sprite_perso.setPosition(680, 300);

     if(!mapping.loadFromFile("images/bourgp.png"))
            cout<<"ERROR"<<endl;
    smap.setTexture(mapping);
        smap.setScale(2.9f, 2.9f);


    if(!stinky.loadFromFile("images/stinky.png"))
            cout<<"ERROR"<<endl;
    sstinky.setTexture(stinky);
    sstinky.setScale(0.4f, 0.4f);
    sstinky.setPosition(565, 10);


}

void audio(){

         if (!music.openFromFile("son/ville.ogg"))
      cout<<"ERROR"<<endl; // erreur

                     music.play();
             music.setVolume(50.f);
}

int main()
{

    sf::RenderWindow window(sf::VideoMode(screenW, screenH), "Pokemon version Or!");
        window.setFramerateLimit(15);

            texture();


    while (window.isOpen())
    {


        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


         while (check == false)
            {

                window.clear();
                window.draw(smenu);
                window.display();

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))


                    check = true;

                    audio();
                    music.setLoop(true);

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                    return EXIT_SUCCESS;
            }


    //j'appelle le texture.cpp dans le personnages.cpp pour les deplacements et tout ca reviens dans le main, le .hpp sert à crée ses fonctions rappelez

         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
        check2=true;
        b++;
        det=0;

         if(!pauses.loadFromFile("images/pauseyes.png"))
                cout<<"ERROR"<<endl;
            spause.setTexture(pauses);
            spause.setPosition(sprite_perso.getPosition().x -180, sprite_perso.getPosition().y -180);
            spause.setScale(0.5f, 0.5f);
            speed=0;
            smap.setColor(sf::Color(255, 255, 255, 50));
                    sstinky.setColor(sf::Color(255, 255, 255, 50));

            det=1;
            }

                if(b%2==1){
        check2=false;
        spause.setScale(0.f, 0.f);
        spause2.setScale(0.f, 0.f);
        smap.setColor(sf::Color(255, 255, 255, 255));
        sstinky.setColor(sf::Color(255, 255, 255, 255));
                }

                                if(check2==true) {

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
           if(!pause2.loadFromFile("images/pauseno.png"))
                cout<<"ERROR"<<endl;
            spause2.setTexture(pause2);
            spause2.setPosition(800,600);
            spause2.setScale(0.5f, 0.5f);
            det=2;
            spause.setScale(0.f, 0.f);


           }

                  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){

                b=2;
                         if(!pauses.loadFromFile("images/pauseyes.png"))
                cout<<"ERROR"<<endl;
            spause.setTexture(pauses);
            spause.setPosition(sprite_perso.getPosition().x -180, sprite_perso.getPosition().y -180);
            spause.setScale(0.5f, 0.5f);
            det=1;

           }

                           if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && det==2){

                    speed=10;
                    b=3;
                }


                 if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && det==1){

                    return EXIT_SUCCESS;
                 }
        }

        deplacements(sprite_perso);
        camera();
        dial();
        history();
        collisions();



        window.clear();
        window.draw(smap);
        window.draw(stransition);
        window.draw(smap3);
        window.draw(sdialogue);
        window.draw(sdialogue2);
        window.draw(sstinky);
        window.draw(snuage);
        window.draw(sprite_perso);
        window.draw(spause2);
        window.draw(spause);
        window.setView(cam);
        window.display();


    }
    return 0;
}
