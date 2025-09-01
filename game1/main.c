#include <raylib.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // make a window
    InitWindow(1000 ,600 , "hello");
    // vector for the postion of the rectangle
    Vector2 pos = {450,270};
    Color color = { 200, 122, 255, 255 };
    
   
   // int recW = 100;
    //int recH = 60;

    SetTargetFPS(120);
    srand(time(NULL));
  

    // the main loop
    while (!WindowShouldClose())
    {
        
        //event handling
        /*
        if(IsKeyDown(KEY_RIGHT)){pos.x = pos.x + 1;}
        if(IsKeyDown(KEY_UP)){pos.y = pos.y - 1;}
        if(IsKeyDown(KEY_LEFT)){pos.x = pos.x - 1;}
        if(IsKeyDown(KEY_DOWN)){pos.y = pos.y + 1;}
        */



        //update position
        //if the position of the x axis is == 1000 start form the beginning
        /*
        if (pos.x > GetScreenWidth()){pos.x = 0;}
        else if(pos.x < 0){pos.x = 1000;}
        else if(pos.y > 600){pos.y = 0;}
        else if(pos.y < 0){pos.y = 600;}
        */
       pos.x = GetMouseX() - 20;
       pos.y = GetMouseY() - 20;

       if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){

           color.r = rand() % 255;
           color.g = rand() % 255;
           color.b = rand() % 255;
           color.a = 255;

           
    }
       
        
        

        //Drawing Objects

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(pos.x ,pos.y, 100,60, color);
        EndDrawing();
        
    }
    
   return 0;
}
