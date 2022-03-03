#include"cross.hpp"


void t_cross :: draw(sf :: RenderWindow &window, int _x, int _y){
    
    cross_sprite.setPosition(_x,_y);
    window.draw(cross_sprite);

}