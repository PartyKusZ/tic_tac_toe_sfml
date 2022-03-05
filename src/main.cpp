#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include"gameboard.hpp"
#include"cross.hpp"
#include"circle.hpp"
#include<iostream>
using namespace std;
int main()
{

    
    t_gameboard gameboard;
       


    sf::RenderWindow window(sf::VideoMode(787, 836,32), "TIC TAC TOE!");
    
    window.clear();
    while (window.isOpen())
    {
       
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
                gameboard.game_event(window,event);
        }

        
       
        gameboard.draw_gameboard(window);
        gameboard.draw_circles_crosses(window);
        gameboard.draw_win(window,event);

        window.display();
    }

    return 0;
}
