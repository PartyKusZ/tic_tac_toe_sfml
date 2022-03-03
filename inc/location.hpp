#ifndef CCE_HPP
#define CCE_HPP

enum class t_circ_cross {X,O,empty};

class t_location {
    public:
        t_circ_cross XO = t_circ_cross :: empty;
        int x;
        int y;


};


#endif
