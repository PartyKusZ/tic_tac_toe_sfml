#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include<string>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

#include"location.hpp"

class t_circle{

    private:
        std::string filename = "textures/O.png";

        int x; //coordinate
        int y; //coordinate

        t_circ_cross circ = t_circ_cross :: O;

        sf :: Texture circle_texture;
        sf :: Sprite circle_sprite;


    public:
        
        t_circle() {
            circle_texture.loadFromFile(filename);
            circle_sprite.setTexture(circle_texture);
        };


        std::string get_filename(){
            return filename;
        };

        t_circ_cross get_type(){
            return circ;
        };

        void set_coord(int _x, int _y){
            this->x = _x;
            this->y = _y;
        };

        void draw(sf :: RenderWindow &window, int _x, int _y);

       



    

};


#endif
