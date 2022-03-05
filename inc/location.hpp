#ifndef CCE_HPP
#define CCE_HPP

enum class t_circ_cross {X,O,empty,draw};

class t_location {
    public:
        t_circ_cross XO = t_circ_cross :: empty;
        int x = 0;
        int y = 0;

        int line_vertical = -1;
        int line_horizontal = -1;
        int line_diagonal_up = -1;
        int line_diagonal_down = -1;


};


#endif
