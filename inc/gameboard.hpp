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
#include"circle_cross_enum.hpp"
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
class t_gameboard {

    private:
        std :: string filename = "/home/kubus/Pulpit/tic_tac_toe_sfml/textures/gameboard.png";

        t_location tab[3][3];

        t_circle circle;
        t_cross cross;



        
    public:


        std::string get_filename(){
            return filename;
        };
       
       void add_cross(int x, int y);
       void add_circle(int x, int y);
       void draw(sf :: RenderWindow &window);


};



#endif