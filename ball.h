#include <iostream>
#include <raylib.h>

class ball{
public:

float x = 80;
float y = 80;
int radius = 5;
float direction_angle = 3.1415/6;

int centre;

void bounce();
void move();

};
