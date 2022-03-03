#include"gameboard.hpp"

void t_gameboard :: add_circle(int x,int y){
    circle.set_coord(x,y);
    if(x > Ix && x < IIx && y > Iy && y < IIy){
        if(tab[1][1].XO == t_circ_cross :: empty)
            tab[1][1].XO = circle.get_type();
            tab[1][1].x = Ix;
            tab[1][1].y = Iy;   
    }

    if(x > IIx && x < IIIx && y > Iy && y < IIy){
        if(tab[2][1].XO == t_circ_cross :: empty)
            tab[2][1].XO = circle.get_type();
            tab[2][1].x = IIx;
            tab[2][1].y = Iy;
    }

    if(x > IIIx && x < IIIIx && y > Iy && y < IIy){
        if(tab[3][1].XO == t_circ_cross :: empty)
            tab[3][1].XO = circle.get_type();
            tab[3][1].x = IIIx;
            tab[3][1].y = Iy;
    }

    if(x > Ix && x < IIx && y > IIy && y < IIIy){
        if(tab[1][2].XO == t_circ_cross :: empty)
            tab[1][2].XO = circle.get_type();
            tab[1][2].x = Ix;
            tab[1][2].y = IIy;
    }

    if(x > IIx && x < IIIx && y > IIy && y < IIIy){
        if(tab[2][2].XO == t_circ_cross :: empty)
            tab[2][2].XO = circle.get_type();   
            tab[2][2].x = IIx;
            tab[2][2].y = IIy;
    }
    
    if(x > IIIx && x < IIIIx && y > IIy && y < IIIy){
        if(tab[3][2].XO == t_circ_cross ::empty)
            tab[3][2].XO = circle.get_type();
            tab[3][2].x = IIIx;
            tab[3][2].y = IIy;
    }

    if(x > Ix && x < IIx && y > IIIy && y < IIIIy){
        if(tab[1][3].XO == t_circ_cross :: empty)
            tab[1][3].XO = circle.get_type();
            tab[1][3].x = Ix;
            tab[1][3].y = IIIy;
    }

    if(x > IIx && x < IIIx && y > IIIy && y < IIIIy){
        if(tab[2][3].XO == t_circ_cross :: empty)
            tab[2][3].XO = circle.get_type();
            tab[2][3].x = IIx;
            tab[2][3].y = IIIy;
    }

    if(x > IIIx && x < IIIIx && y > IIIy && y < IIIIy){
        if(tab[3][3].XO == t_circ_cross :: empty)
            tab[3][3].XO = circle.get_type();
            tab[3][3].x = IIIx;
            tab[3][3].y = IIIy;
    }
    
    
}


void t_gameboard :: add_cross(int x, int y){

   cross.set_coord(x,y);
   if(x > Ix && x < IIx && y > Iy && y < IIy){
        if(tab[1][1].XO == t_circ_cross :: empty)
            tab[1][1].XO = cross.get_type();
            tab[1][1].x = Ix;
            tab[1][1].y = Iy;   
    }

    if(x > IIx && x < IIIx && y > Iy && y < IIy){
        if(tab[2][1].XO == t_circ_cross :: empty)
            tab[2][1].XO = cross.get_type();
            tab[2][1].x = IIx;
            tab[2][1].y = Iy;
    }

    if(x > IIIx && x < IIIIx && y > Iy && y < IIy){
        if(tab[3][1].XO == t_circ_cross :: empty)
            tab[3][1].XO = cross.get_type();
            tab[3][1].x = IIIx;
            tab[3][1].y = Iy;
    }

    if(x > Ix && x < IIx && y > IIy && y < IIIy){
        if(tab[1][2].XO == t_circ_cross :: empty)
            tab[1][2].XO = cross.get_type();
            tab[1][2].x = Ix;
            tab[1][2].y = IIy;
    }

    if(x > IIx && x < IIIx && y > IIy && y < IIIy){
        if(tab[2][2].XO == t_circ_cross :: empty)
            tab[2][2].XO = cross.get_type();   
            tab[2][2].x = IIx;
            tab[2][2].y = IIy;
    }
    
    if(x > IIIx && x < IIIIx && y > IIy && y < IIIy){
        if(tab[3][2].XO == t_circ_cross ::empty)
            tab[3][2].XO = cross.get_type();
            tab[3][2].x = IIIx;
            tab[3][2].y = IIy;
    }

    if(x > Ix && x < IIx && y > IIIy && y < IIIIy){
        if(tab[1][3].XO == t_circ_cross :: empty)
            tab[1][3].XO = cross.get_type();
            tab[1][3].x = Ix;
            tab[1][3].y = IIIy;
    }

    if(x > IIx && x < IIIx && y > IIIy && y < IIIIy){
        if(tab[2][3].XO == t_circ_cross :: empty)
            tab[2][3].XO = cross.get_type();
            tab[2][3].x = IIx;
            tab[2][3].y = IIIy;
    }

    if(x > IIIx && x < IIIIx && y > IIIy && y < IIIIy){
        if(tab[3][3].XO == t_circ_cross :: empty)
            tab[3][3].XO = cross.get_type();
            tab[3][3].x = IIIx;
            tab[3][3].y = IIIy;
    }
    
    
    
}


void t_gameboard :: draw(sf :: RenderWindow &window){

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(tab[i][j].XO == t_circ_cross :: X){
                cross.draw(window,tab[i][j].x,tab[i][j].y);
            }
            if(tab[i][j].XO == t_circ_cross :: O){
                circle.draw(window,tab[i][j].x,tab[i][j].y);

            }
        }
    }
}