#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP

/* These constants define position of 
    each circles and crosses on gameboard 
    e.g. Ix and Iy define coodrinates of first square (1,1) 
    on gameboard*/
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


/*This class define mechanisms related to the game, such as

localization of each circle and cross on  gameboard, chcecking 

who won */

class t_gameboard {

    private:
   

        std :: string filename = "textures/gameboard.png";

        t_location tab[3][3]; // gameboard: in this table is added each cross and circle 

        t_circle circle;
        t_cross cross;

        sf :: Texture gameboard_texture;
        sf :: Sprite gameboard_sprite;


        sf :: Vector2i mouse_location_window;
        sf :: Vector2f mouse_location_scene;

        t_location who_win ;

        int x_or_o = 0; // using to decide whose move 


        
        
   public:

        
        t_gameboard(){
            gameboard_texture.loadFromFile(filename);
            gameboard_sprite.setTexture(gameboard_texture);
            
        };
        std::string get_filename(){
            return filename;
        };  

       void draw_gameboard(sf :: RenderWindow &window){
           window.draw(gameboard_sprite);
       };
       void add_cross(int x, int y); // adding crosx to tab[][]
       void add_circle(int x, int y); // adding circle to tab[][]
       void draw_circles_crosses(sf :: RenderWindow &window); // drawing circle and crosses on scene
       void game_event(sf :: RenderWindow &window, sf::Event &event);  // cheching click on the scene 
       void clear_gameboard(); // cleanig the scene 
       t_location check_win();
       void draw_win(sf :: RenderWindow &window,sf :: Event &event); //drawing line of winning 
       bool win();
       
         

};



#endif