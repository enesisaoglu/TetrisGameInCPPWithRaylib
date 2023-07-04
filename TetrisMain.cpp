#include "raylib.h"
#include "Game.h"
#include "colors.h"
#include <iostream>

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main(void)
{
    Color darkBlue = { 44,44,127,255 };
    //Function to initialize window size (width, height)...
    InitWindow(500, 620, "Tetris");
    //Function to set frames per second...
    SetTargetFPS(60);

    Game game = Game();
    Font font = Font();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        game.HandleInput();
        if (EventTriggered(0.2))
        {
            game.MoveBlockDown();
        }
        ClearBackground(darkBlue);  // Clear the background with the desired color

        DrawText("Score", 365, 15, 30, WHITE);
        DrawRectangleRounded({ 320,55,170,60 }, 0.3, 6, lightBlue);
        DrawText("Next", 370, 175, 30, WHITE);
        DrawRectangleRounded({ 320,215,170,180 }, 0.3, 6, lightBlue);
        if (game.gameOver == true)
        {
            DrawText("Game Over", 320, 450, 30, WHITE);
        }

        char scoreText[10];
        sprintf_s(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);
        DrawText(scoreText, (320 + (170 - textSize.x)/2), 65, 30, WHITE);
      
        game.Draw();
        
      

        EndDrawing();
    }


    CloseWindow();

    return 0;
}