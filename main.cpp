#include <SFML/Graphics.hpp>
#include "include/test.h"

using namespace std;

int main()
{
    Test* t = new Test();
    t->getX();
    (new Test())->getX();
    sf::RenderWindow window(sf::VideoMode(1200, 700), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    sf::Texture backgroundTxt;
    backgroundTxt.loadFromFile("background-brown.jpg", sf::IntRect(10,10,32,32));
    backgroundTxt.setRepeated(true);

    // sprite
    sf::Sprite sprite;
    sprite.setTextureRect(sf::IntRect(0,0,1200,800));
    sprite.setTexture(backgroundTxt);

    //sf::RectangleShape line(sf::Vector2f(150, 5));
    //test();

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
        window.draw(shape);

        window.display();
    }

    return 0;
}


