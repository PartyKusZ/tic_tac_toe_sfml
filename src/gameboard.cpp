#include"gameboard.hpp"

void t_gameboard :: add_circle(int x,int y){
    circle.set_coord(x,y);
    if((x > Ix && x < IIx) && (y > Iy && y < IIy)){
        if(tab[0][0].XO == t_circ_cross :: empty){
            tab[0][0].XO = circle.get_type();
            tab[0][0].x = Ix;
            tab[0][0].y = Iy;
            std :: cout << "X: add circle " << tab[0][0].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[0][0].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > Iy && y < IIy)){
        if(tab[1][0].XO == t_circ_cross :: empty){
            tab[1][0].XO = circle.get_type();
            tab[1][0].x = IIx;
            tab[1][0].y = Iy;
            std :: cout << "X: add circle " << tab[1][0].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[1][0].y<< std :: endl;   
        }
           
    }

    if((x > IIIx && x < IIIIx) && (y > Iy && y < IIy)){
        if(tab[2][0].XO == t_circ_cross :: empty){
            tab[2][0].XO = circle.get_type();
            tab[2][0].x = IIIx;
            tab[2][0].y = Iy;
            std :: cout << "X: add circle " << tab[2][0].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[2][0].y<< std :: endl;   
        }
    }

    if((x > Ix && x < IIx) && (y > IIy && y < IIIy)){
        if(tab[0][1].XO == t_circ_cross :: empty){
            tab[0][1].XO = circle.get_type();
            tab[0][1].x = Ix;
            tab[0][1].y = IIy;
            std :: cout << "X: add circle " << tab[0][1].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[0][1].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > IIy && y < IIIy)){
        if(tab[1][1].XO == t_circ_cross :: empty){
            tab[1][1].XO = circle.get_type();   
            tab[1][1].x = IIx;
            tab[1][1].y = IIy;
            std :: cout << "X: add circle " << tab[1][1].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[1][1].y<< std :: endl;   
        }
    }
    
    if((x > IIIx && x < IIIIx) && (y > IIy && y < IIIy)){
        if(tab[2][1].XO == t_circ_cross ::empty){
            tab[2][1].XO = circle.get_type();
            tab[2][1].x = IIIx;
            tab[2][1].y = IIy;
            std :: cout << "X: add circle " << tab[2][1].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[2][1].y<< std :: endl;   
        }
    }

    if((x > Ix && x < IIx) && (y > IIIy && y < IIIIy)){
        if(tab[0][2].XO == t_circ_cross :: empty){
            tab[0][2].XO = circle.get_type();
            tab[0][2].x = Ix;
            tab[0][2].y = IIIy;
            std :: cout << "X: add circle " << tab[0][2].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[0][2].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > IIIy && y < IIIIy)){
        if(tab[1][2].XO == t_circ_cross :: empty){
            tab[1][2].XO = circle.get_type();
            tab[1][2].x = IIx;
            tab[1][2].y = IIIy;
            std :: cout << "X: add circle " << tab[1][2].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[1][2].y<< std :: endl;   
        }
    }

    if((x > IIIx && x < IIIIx) && (y > IIIy && y < IIIIy)){
        if(tab[2][2].XO == t_circ_cross :: empty){
            tab[2][2].XO = circle.get_type();
            tab[2][2].x = IIIx;
            tab[2][2].y = IIIy;
            std :: cout << "X: add circle " << tab[2][2].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[2][2].y<< std :: endl;   
        }
    }
    
    
}


void t_gameboard :: add_cross(int x, int y){

   cross.set_coord(x,y);
     if((x > Ix && x < IIx) && (y > Iy && y < IIy)){
        if(tab[0][0].XO == t_circ_cross :: empty){
            tab[0][0].XO = cross.get_type();
            tab[0][0].x = Ix;
            tab[0][0].y = Iy;
            std :: cout << "X: add cross " << tab[0][0].x<< std :: endl;
            std :: cout << "Y: add cross " << tab[0][0].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > Iy && y < IIy)){
        if(tab[1][0].XO == t_circ_cross :: empty){
            tab[1][0].XO = cross.get_type();
            tab[1][0].x = IIx;
            tab[1][0].y = Iy;
            std :: cout << "X: add cross " << tab[1][0].x<< std :: endl;
            std :: cout << "Y: add cross " << tab[1][0].y<< std :: endl;   
        }
           
    }

    if((x > IIIx && x < IIIIx) && (y > Iy && y < IIy)){
        if(tab[2][0].XO == t_circ_cross :: empty){
            tab[2][0].XO = cross.get_type();
            tab[2][0].x = IIIx;
            tab[2][0].y = Iy;
            std :: cout << "X: add cross " << tab[2][0].x<< std :: endl;
            std :: cout << "Y: add cross " << tab[2][0].y<< std :: endl;   
        }
    }

    if((x > Ix && x < IIx) && (y > IIy && y < IIIy)){
        if(tab[0][1].XO == t_circ_cross :: empty){
            tab[0][1].XO = cross.get_type();
            tab[0][1].x = Ix;
            tab[0][1].y = IIy;
            std :: cout << "X: add cross " << tab[0][1].x<< std :: endl;
            std :: cout << "Y: add cross " << tab[0][1].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > IIy && y < IIIy)){
        if(tab[1][1].XO == t_circ_cross :: empty){
            tab[1][1].XO = cross.get_type();   
            tab[1][1].x = IIx;
            tab[1][1].y = IIy;
            std :: cout << "X: add cross " << tab[1][1].x<< std :: endl;
            std :: cout << "Y: add cross " << tab[1][1].y<< std :: endl;   
        }
    }
    
    if((x > IIIx && x < IIIIx) && (y > IIy && y < IIIy)){
        if(tab[2][1].XO == t_circ_cross ::empty){
            tab[2][1].XO = cross.get_type();
            tab[2][1].x = IIIx;
            tab[2][1].y = IIy;
            std :: cout << "X: add cross " << tab[2][1].x<< std :: endl;
            std :: cout << "Y: add cross " << tab[2][1].y<< std :: endl;   
        }
    }

    if((x > Ix && x < IIx) && (y > IIIy && y < IIIIy)){
        if(tab[0][2].XO == t_circ_cross :: empty){
            tab[0][2].XO = cross.get_type();
            tab[0][2].x = Ix;
            tab[0][2].y = IIIy;
            std :: cout << "X: add cross " << tab[0][2].x<< std :: endl;
            std :: cout << "Y: add cross " << tab[0][2].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > IIIy && y < IIIIy)){
        if(tab[1][2].XO == t_circ_cross :: empty){
            tab[1][2].XO = cross.get_type();
            tab[1][2].x = IIx;
            tab[1][2].y = IIIy;
            std :: cout << "X: add cross " << tab[1][2].x<< std :: endl;
            std :: cout << "Y: add cross " << tab[1][2].y<< std :: endl;   
        }
    }

    if((x > IIIx && x < IIIIx) && (y > IIIy && y < IIIIy)){
        if(tab[2][2].XO == t_circ_cross :: empty){
            tab[2][2].XO = cross.get_type();
            tab[2][2].x = IIIx;
            tab[2][2].y = IIIy;
            std :: cout << "X: add  cross " << tab[2][2].x<< std :: endl;
            std :: cout << "Y: add  cross " << tab[2][2].y<< std :: endl;   
        }
    }
    
    
    
}


void t_gameboard :: clear_gameboard(){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            tab[i][j].XO = t_circ_cross :: empty;
            tab[i][j].line_diagonal_down = -1;
            tab[i][j].line_diagonal_up = -1;
            tab[i][j].line_horizontal = -1;
            tab[i][j].line_vertical = -1;

        }
    }
}


void t_gameboard :: draw_circles_crosses(sf :: RenderWindow &window){
   
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


t_location t_gameboard :: check_win(){
  
    t_location winner;
    int circles = 0;
    int crossses = 0;
    int draw = 0;

    for(int i = 0; i < 3; ++i){ // checking horizontal win
        for(int j = 0; j < 3; ++j){
            if(tab[i][j].XO == t_circ_cross :: O){
                circles++;
            }
            if(tab[i][j].XO == t_circ_cross ::X){
                crossses++;
            }

        }
        if(circles == 3){
            winner.XO = t_circ_cross :: O;
            winner.line_horizontal = i;
            return winner;
        }
        if(crossses == 3){
            winner.XO = t_circ_cross :: X;
            winner.line_horizontal = i;
            return winner;
        }
        circles = 0;
        crossses = 0;
    }

    for(int i = 0; i < 3; ++i){ // checking vertical win
        for(int j = 0; j < 3; ++j){
            if(tab[j][i].XO == t_circ_cross :: O){
                circles++;
            }
            if(tab[j][i].XO == t_circ_cross :: X){
                crossses++;
            }
            
        }
        if(circles == 3){
            winner.XO = t_circ_cross :: O;
            winner.line_vertical = i;
            return winner;
        }
        if(crossses == 3){
            winner.XO = t_circ_cross :: X;
            winner.line_vertical = i;
            return winner;
        }
        circles = 0;
        crossses = 0;
    }


    for(int i = 0; i < 3; ++i){ // checking diagonal win
        if(tab[i][i].XO == t_circ_cross :: O){
            circles++;
        }
        if(tab[i][i].XO == t_circ_cross :: X){
            crossses++;
        }

    }
    if(circles == 3){
            winner.XO = t_circ_cross :: O;
            winner.line_diagonal_down = 1;
            return winner;
        }
        if(crossses == 3){
            winner.XO = t_circ_cross :: X;
            winner.line_diagonal_down = 1;
            return winner;
        }
        circles = 0;
        crossses = 0;

    for(int i = 0, j = 2; i < 3; ++i, --j){
        if(tab[i][j].XO == t_circ_cross :: O){
                circles++;
            }
            if(tab[i][j].XO == t_circ_cross ::X){
                crossses++;
            }
    }

    if(circles == 3){
            winner.XO = t_circ_cross :: O;
            winner.line_diagonal_up = 1;
            return winner;
        }
        if(crossses == 3){
            winner.XO = t_circ_cross :: X;
            winner.line_diagonal_up = 1;
            return winner;
        }
        circles = 0;
        crossses = 0;

    for(int i = 0; i < 3; ++i){ // checking draw
        for(int j = 0; j < 3; ++j){
            if(tab[i][j].XO == t_circ_cross :: O || tab[i][j].XO == t_circ_cross ::X){
                draw++;
            }
            
        }
    }
    if(draw == 9){
        winner.XO = t_circ_cross :: draw;
        return winner;
    }


    winner.XO = t_circ_cross ::empty; 
    winner.line_vertical = -1;
    winner.line_horizontal = -1;
    winner.line_diagonal_up = -1;
    winner.line_diagonal_down = -1;
    return winner;


}

void t_gameboard :: game_event(sf :: RenderWindow &window,sf :: Event &event){

    
    if(event.type == sf :: Event :: MouseButtonPressed && event.mouseButton.button == sf :: Mouse :: Left){
        mouse_location_window = sf :: Mouse :: getPosition(window);
        mouse_location_scene = window.mapPixelToCoords(mouse_location_window);
        std :: cout << "X: " << mouse_location_scene.x<< std :: endl;
        std :: cout << "Y: " << mouse_location_scene.y<< std :: endl;
        x_or_o++;
    }
    if(x_or_o % 2 == 0){
        this->add_circle(mouse_location_scene.x,mouse_location_scene.y);
    }else{
        this->add_cross(mouse_location_scene.x,mouse_location_scene.y);
    }
    
    

    if(who_win.XO != t_circ_cross :: empty || who_win.XO == t_circ_cross :: draw ){
        if(event.type == sf :: Event :: MouseButtonPressed && event.mouseButton.button == sf :: Mouse :: Left){
            this->clear_gameboard();
        }
    }
    
     
}


void t_gameboard :: draw_win(sf :: RenderWindow &window, sf :: Event &event){
    sf::RectangleShape line(sf::Vector2f(520, 20));
    sf::RectangleShape diagonale(sf::Vector2f(733, 20));
    line.setFillColor(sf :: Color :: Red);
    diagonale.setFillColor(sf :: Color :: Red);


    who_win = this->check_win();
    if(who_win.XO != t_circ_cross :: empty  ){
        if(who_win.line_vertical == 0){
            line.setPosition(130,160);
            window.draw(line);
        }
        if(who_win.line_vertical == 1){
            line.setPosition(130,415);
            window.draw(line);
        }
        if(who_win.line_vertical == 2){
            line.setPosition(130,677);
            window.draw(line);
        }
        if(who_win.line_horizontal == 0){
            line.setPosition(130,160);
            line.rotate(90);
            window.draw(line);
        }
        if(who_win.line_horizontal == 1){
            line.setPosition(394,160);
            line.rotate(90);
            window.draw(line);
        }
        if(who_win.line_horizontal == 2){
            line.setPosition(677,160);
            line.rotate(90);
            window.draw(line);
        }
        if(who_win.line_diagonal_up == 1){
            diagonale.setPosition(650,160);
            diagonale.rotate(135);
            window.draw(diagonale);
        }
        if(who_win.line_diagonal_down == 1){
            diagonale.setPosition(130,160);
            diagonale.rotate(45);
            window.draw(diagonale);
        }
        
        
    }
    
}


