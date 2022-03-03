#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include"gameboard.hpp"
#include"cross.hpp"
#include"circle.hpp"
int main()
{

    
    t_gameboard gameboard;
   


    sf::Texture texture_gameboard;
    

    texture_gameboard.loadFromFile(gameboard.get_filename());
   


    sf::Sprite image_gameboard;
   



    image_gameboard.setTexture(texture_gameboard);
    
    


    sf::RenderWindow window(sf::VideoMode(787, 836,32), "SFML works!");
    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(image_gameboard);
        window.display();
    }

    return 0;
}
