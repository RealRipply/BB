#include <iostream>
#include <raylib.h>
#include <cmath>
#include "ball.h"
using namespace std;


void ball::move(){
if(x > 0 && y > 0 && x < 800 && y < 450){

float x_fact = cos(direction_angle);
float y_fact = sin(direction_angle);

x = x + x_fact;
y = y + y_fact;
//cout << x_fact << endl;
//cout << y_fact << endl;

}

}

void ball::bounce(){


}

