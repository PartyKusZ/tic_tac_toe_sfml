#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include<string>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

#include"circle_cross_enum.hpp"

class t_circle{

    private:
        std::string filename = "/home/kubus/Pulpit/tic_tac_toe_sfml/textures/O.png";

        int x; //coordinate
        int y; //coordinate

        t_circ_cross circ = t_circ_cross :: O;

        sf :: Texture circle_texture;
        sf :: Sprite circle_sprite;


    public:
        t_circle() = default;
        t_circle(int _x, int _y): x(_x), y(_y){;};


        std::string get_filename(){
            return filename;
        };

        t_circ_cross get_type(){
            return circ;
        };

        void set_coord(int x, int y){
            this->x = x;
            this->y = y;
        };

        void draw(sf :: RenderWindow &window, int _x, int _y);

       



    

};


#endif
