#include "board.h"

board::board(){ //Default Constructor for the paddle
x = 300;
y = 400;
height = 20;
width = 200;
};


void board::MoveLeft(){
//std::cout << "Push Detected" << std::endl;
if(x > 0){
x = x - 4;
}

}

void board::MoveRight(){
//std::cout << "Push Detected" << std::endl;
if(x < 600){
x = x + 4;
}
}
