#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::Texture texture;
    texture.loadFromFile("textures/zdj.png");
    sf::Sprite image;
    image.setTexture(texture);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(image);
        window.display();
    }

    return 0;
}