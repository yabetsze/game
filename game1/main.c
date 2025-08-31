#include <raylib.h>

int main(void) {
    InitWindow(800, 600, "Hello Raylib!");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("It works!", 350, 280, 20, BLUE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
