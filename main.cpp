#include <SFML/Graphics.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");

    sf:: Texture texture;
    if(!texture.loadFromFile("ground.jpg")){
        return 0;
    }
    sf::Sprite sprite;
        sprite.setTexture(texture);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}
