#ifndef CROSS_HPP
#define CROSS_HPP
#include <string>
#include"location.hpp"
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

class t_cross{

    private:
        std::string filename = "/home/kubus/Pulpit/tic_tac_toe_sfml/textures/X.png";

        int x; //coordinate
        int y; //coordinate

        t_circ_cross corss = t_circ_cross :: X;

        sf :: Texture cross_texture;
        sf :: Sprite cross_sprite;

    public:
        
        t_cross(){
            cross_texture.loadFromFile(filename);
            cross_sprite.setTexture(cross_texture);
        };

        std::string get_filename(){
            return filename;
        };

        t_circ_cross get_type(){
            return corss;
        };

        void set_coord(int _x, int _y){
            this->x = _x;
            this->y = _y;
        };

         void draw(sf :: RenderWindow &window, int _x, int _y);
         
        

};



#endif
