#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include<string>

class t_circle{

    private:
         std::string filename = "/home/kubus/Pulpit/tic_tac_toe_sfml/textures/O.png";

         int x; //coordinate
         int y; //coordinate

    public:

        t_circle(int _x, int _y): x(_x), y(_y){;};


        std::string get_filename(){
            return filename;
        };



    

};


#endif
