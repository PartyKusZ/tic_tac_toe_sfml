#ifndef CROSS_HPP
#define CROSS_HPP
#include <string>
class t_cross{

    private:
        std::string filename = "/home/kubus/Pulpit/tic_tac_toe_sfml/textures/X.png";

        int x; //coordinate
        int y; //coordinate

    public:

        t_cross(int _x, int _y): x(_x), y(_y){;};

        std::string get_filename(){
            return filename;
        };
    


};



#endif
