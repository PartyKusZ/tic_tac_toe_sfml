#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP

#include<string>
#include<vector>
#include"circle.hpp"
#include"cross.hpp"

class t_gameboard {

    private:
        std :: string filename = "/home/kubus/Pulpit/tic_tac_toe_sfml/textures/gameboard.png";

        std :: vector<t_circle> vec_of_circles;
        std :: vector<t_cross> vec_of_crosses;



        
    public:
        std::string get_filename(){
            return filename;
        };
        void add_circle(){

        };
};



#endif