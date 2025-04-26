#include <iostream>
#include <raylib.h>
#include "board.h"
#include "ball.h"
using namespace std;

int main(void)
{

    InitWindow(800, 450, "Ripply Game");
    SetTargetFPS(60);
    
    board paddle;
    ball diski;

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            //DrawText("Works, Oddly Enough", 190, 200, 20, LIGHTGRAY);
            DrawRectangle(paddle.x, paddle.y, paddle.width, paddle.height, BLACK);
            
            DrawCircle(diski.x, diski.y, diski.radius, RED);
            
            if (IsKeyDown(KEY_A)){
            paddle.MoveLeft();
            }
            
            if (IsKeyDown(KEY_D)){
            paddle.MoveRight();
            }
            
            diski.move(); //Let the ball move
            
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
