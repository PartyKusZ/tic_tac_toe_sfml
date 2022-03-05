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
            std :: cout << "X: add circle " << tab[0][0].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[0][0].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > Iy && y < IIy)){
        if(tab[1][0].XO == t_circ_cross :: empty){
            tab[1][0].XO = cross.get_type();
            tab[1][0].x = IIx;
            tab[1][0].y = Iy;
            std :: cout << "X: add circle " << tab[1][0].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[1][0].y<< std :: endl;   
        }
           
    }

    if((x > IIIx && x < IIIIx) && (y > Iy && y < IIy)){
        if(tab[2][0].XO == t_circ_cross :: empty){
            tab[2][0].XO = cross.get_type();
            tab[2][0].x = IIIx;
            tab[2][0].y = Iy;
            std :: cout << "X: add circle " << tab[2][0].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[2][0].y<< std :: endl;   
        }
    }

    if((x > Ix && x < IIx) && (y > IIy && y < IIIy)){
        if(tab[0][1].XO == t_circ_cross :: empty){
            tab[0][1].XO = cross.get_type();
            tab[0][1].x = Ix;
            tab[0][1].y = IIy;
            std :: cout << "X: add circle " << tab[0][1].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[0][1].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > IIy && y < IIIy)){
        if(tab[1][1].XO == t_circ_cross :: empty){
            tab[1][1].XO = cross.get_type();   
            tab[1][1].x = IIx;
            tab[1][1].y = IIy;
            std :: cout << "X: add circle " << tab[1][1].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[1][1].y<< std :: endl;   
        }
    }
    
    if((x > IIIx && x < IIIIx) && (y > IIy && y < IIIy)){
        if(tab[2][1].XO == t_circ_cross ::empty){
            tab[2][1].XO = cross.get_type();
            tab[2][1].x = IIIx;
            tab[2][1].y = IIy;
            std :: cout << "X: add circle " << tab[2][1].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[2][1].y<< std :: endl;   
        }
    }

    if((x > Ix && x < IIx) && (y > IIIy && y < IIIIy)){
        if(tab[0][2].XO == t_circ_cross :: empty){
            tab[0][2].XO = cross.get_type();
            tab[0][2].x = Ix;
            tab[0][2].y = IIIy;
            std :: cout << "X: add circle " << tab[0][2].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[0][2].y<< std :: endl;   
        }
    }

    if((x > IIx && x < IIIx) && (y > IIIy && y < IIIIy)){
        if(tab[1][2].XO == t_circ_cross :: empty){
            tab[1][2].XO = cross.get_type();
            tab[1][2].x = IIx;
            tab[1][2].y = IIIy;
            std :: cout << "X: add circle " << tab[1][2].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[1][2].y<< std :: endl;   
        }
    }

    if((x > IIIx && x < IIIIx) && (y > IIIy && y < IIIIy)){
        if(tab[2][2].XO == t_circ_cross :: empty){
            tab[2][2].XO = cross.get_type();
            tab[2][2].x = IIIx;
            tab[2][2].y = IIIy;
            std :: cout << "X: add circle " << tab[2][2].x<< std :: endl;
            std :: cout << "Y: add circle " << tab[2][2].y<< std :: endl;   
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
    int circles = 0;
    int crosses = 0;
    t_location cords_of_winline;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(tab[i][j].XO == t_circ_cross :: O )
                circles++;

            if(tab[i][j].XO == t_circ_cross :: X )
                crosses++;
            
        }

        if(circles == 3){
            cords_of_winline.XO == t_circ_cross :: O;
            cords_of_winline.line_horizontal = i;
            return cords_of_winline;
            
        }else if (crosses == 3){
            cords_of_winline.XO == t_circ_cross :: X;
            cords_of_winline.line_horizontal = i;
            return cords_of_winline;
        }else{
            cords_of_winline.XO == t_circ_cross :: empty;
            cords_of_winline.line_horizontal = -1;
            return cords_of_winline;
        }
        cout << circles <<endl;
        cout << crosses <<endl;

        circles = 0;
        crosses = 0;
    }


  

    


    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(tab[j][i].XO == t_circ_cross :: O )
                circles++;

            if(tab[j][i].XO == t_circ_cross :: X )
                crosses++;
            
        }

            if(circles == 3){
            cords_of_winline.XO == t_circ_cross :: O;
            cords_of_winline.line_vertical = i;
            return cords_of_winline;
            
        }else if (crosses == 3){
            cords_of_winline.XO == t_circ_cross :: X;
            cords_of_winline.line_vertical = i;
            return cords_of_winline;
        }else{
            cords_of_winline.XO == t_circ_cross :: empty;
            cords_of_winline.line_vertical = -1;
            return cords_of_winline;
        }
        
        circles = 0;
        crosses = 0;
    }


   for(int i = 0; i < 3; ++i){
            if(tab[i][i].XO == t_circ_cross :: O )
                circles++;

            if(tab[i][i].XO == t_circ_cross :: X )
                crosses++;
            
        

               if(circles == 3){
            cords_of_winline.XO == t_circ_cross :: O;
            cords_of_winline.line_diagonal_down = i;
            return cords_of_winline;
            
        }else if (crosses == 3){
            cords_of_winline.XO == t_circ_cross :: X;
            cords_of_winline.line_diagonal_down = i;
            return cords_of_winline;
        }else{
            cords_of_winline.XO == t_circ_cross :: empty;
            cords_of_winline.line_diagonal_down = -1;
            return cords_of_winline;
        }
        
        circles = 0;
        crosses = 0;

   }


   for(int i = 3, j = 0; i > 0; ++i,++j){
       if(tab[i][j].XO == t_circ_cross :: O )
                circles++;

            if(tab[i][j].XO == t_circ_cross :: X )
                crosses++;
            
        

           if(circles == 3){
            cords_of_winline.XO == t_circ_cross :: O;
            cords_of_winline.line_diagonal_up = i;
            return cords_of_winline;
            
        }else if (crosses == 3){
            cords_of_winline.XO == t_circ_cross :: X;
            cords_of_winline.line_diagonal_up = i;
            return cords_of_winline;
        }else{
            cords_of_winline.XO == t_circ_cross :: empty;
            cords_of_winline.line_diagonal_up = -1;
            return cords_of_winline;
        }
        
        circles = 0;
        crosses = 0;

   }


    
}


void t_gameboard :: game_event(sf :: RenderWindow &window,sf :: Event &event){

    
    if(event.type == sf :: Event :: MouseButtonPressed && event.mouseButton.button == sf :: Mouse :: Left){
        mouse_location_window = sf :: Mouse :: getPosition(window);
        mouse_location_scene = window.mapPixelToCoords(mouse_location_window);
        std :: cout << "X: " << mouse_location_scene.x<< std :: endl;
        std :: cout << "Y: " << mouse_location_scene.y<< std :: endl;

    }
    this->add_circle(mouse_location_scene.x,mouse_location_scene.y);
}


void t_gameboard :: draw_win(sf :: RenderWindow &window){
    sf::RectangleShape line(sf::Vector2f(520, 10));
    sf::RectangleShape diagonale(sf::Vector2f(733, 10));
    line.setFillColor( sf :: Color :: Red);
    diagonale.setFillColor( sf :: Color :: Red);

    who_win = check_win();
    if(who_win.XO == t_circ_cross :: X || who_win.XO == t_circ_cross :: O){
        cout<<"Jebać";
        if(who_win.line_horizontal >= 0){
            if(who_win.line_horizontal == 0){
                line.setPosition(130,160);
                window.draw(line);
            }
            if(who_win.line_horizontal == 1){
                line.setPosition(130,415);
                window.draw(line);
            }
            if(who_win.line_horizontal == 2){
                line.setPosition(130,677);
                window.draw(line);
            }           
        }
        if(who_win.line_vertical >= 0){
            if(who_win.line_vertical == 0){
                line.setPosition(130,160);
                line.rotate(90);
                window.draw(line);
            }
            if(who_win.line_vertical == 1){
                line.setPosition(394,160);
                line.rotate(90);
                window.draw(line);
            }
            if(who_win.line_vertical == 2){
                line.setPosition(650,160);
                line.rotate(90);
                window.draw(line);
            }
        }
        if(who_win.line_diagonal_down >=0){
            diagonale.setPosition(130,160);
            diagonale.rotate(45);
            window.draw(diagonale);
        }

        if(who_win.line_diagonal_up >=0){
            diagonale.setPosition(130,677);
            diagonale.rotate(315);
            window.draw(diagonale);
        }


    }
}


