#ifndef ASSIGNMENT_2_19369726_PLAYER_MOVEMENT_H
#define ASSIGNMENT_2_19369726_PLAYER_MOVEMENT_H
//Including the input/output header file for the size of the board
#include "create_board.h"
//Function prototype to take in a player's moves
void player_move(players *player, square board[BOARD_SIZE][BOARD_SIZE], int *num_stacks_red, int *num_stacks_green);
#endif
