#include"circle.hpp"

void t_circle :: draw(sf :: RenderWindow &window, int _x, int _y){
    circle_texture.loadFromFile(filename);
    circle_sprite.setTexture(circle_texture);
    circle_sprite.setPosition(_x,_y);
    window.draw(circle_sprite);

}