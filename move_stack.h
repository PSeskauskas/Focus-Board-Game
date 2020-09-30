#ifndef ASSIGNMENT_2_19369726_MOVE_STACK_H
#define ASSIGNMENT_2_19369726_MOVE_STACK_H
//Including the create board header file that contains all of the structs containing information about the board and
//the squares and pieces of the board
#include "create_board.h"
//Function prototype to move a player's chosen stack to the chosen position and put the player's stack on top of the
//chosen stack
void move_stack(square *start, square *destination, square board[BOARD_SIZE][BOARD_SIZE], players *player);
//Function prototype to add a captured piece that was kept to an empty square on the game board
void add_piece_to_empty_square(players *player, square *destination, square board[BOARD_SIZE][BOARD_SIZE]);
//Function prototype to add a captured piece that was kept to a stack on the game board
void add_piece_to_stack(players *player, square *destination, square board[BOARD_SIZE][BOARD_SIZE]);
//Function prototype to remove the bottom pieces of a stack once the size of the stack exceeds 5 pieces
void remove_bottom_pieces(players *player, square *destination, square board [BOARD_SIZE][BOARD_SIZE]);
#endif