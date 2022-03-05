#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP

#define Ix 60
#define IIx 276
#define IIIx 523
#define IIIIx 787
#define Iy 70
#define IIy 299
#define IIIy 553
#define IIIIy  836


#include<string>
#include<vector>
#include"circle.hpp"
#include"cross.hpp"
#include"location.hpp"
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;
class t_gameboard {

    private:
   

        std :: string filename = "/home/kubus/Pulpit/tic_tac_toe_sfml/textures/gameboard.png";

        t_location tab[3][3];

        t_circle circle;
        t_cross cross;

        sf :: Texture gameboard_texture;
        sf :: Sprite gameboard_sprite;


        sf :: Vector2i mouse_location_window;
        sf :: Vector2f mouse_location_scene;

        t_location who_win ;


        
        
   public:

        
        t_gameboard(){
            gameboard_texture.loadFromFile(filename);
            gameboard_sprite.setTexture(gameboard_texture);
            
        };
        std::string get_filename(){
            return filename;
        };  

       void draw(sf :: RenderWindow &window){
           window.draw(gameboard_sprite);
       };
       void add_cross(int x, int y);
       void add_circle(int x, int y);
       void draw_circles_crosses(sf :: RenderWindow &window);
       void game_event(sf :: RenderWindow &window, sf::Event &event); 
       t_location check_win();
       void draw_win(sf :: RenderWindow &window);
       bool win();
       
         

};



#endif