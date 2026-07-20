#include<stdio.h>

enum GameState
{
    MENU,
    PLAYING,
    PAUSED,
    GAME_OVER
};

int main(){
    
    enum GameState state = MENU;

    state = PLAYING;

    if (state == PLAYING)
    {
        printf("Update the game.\n");
    }

    return 0;
}