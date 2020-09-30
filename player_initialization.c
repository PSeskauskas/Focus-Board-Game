#include "player_initialization.h"
#include <stdio.h>
//Function to take in the players' information at the beginning of the game
void initialize_players(players *player) {
    //Player input
    printf("Please enter the name of the player here: \n");
    scanf("%s", player->playername);
    //Initializing a player's kept and thrown away variables to zero
    player->kept = 0;
    player->thrown_away = 0;
}