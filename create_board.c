//Including the create board header file that contains all of the structs for the board and the players
#include "create_board.h"
//Including the standard library header file so memory allocation can be used
#include <stdlib.h>
//Set square to invalid
set_invalid(square * s){
s->type = INVALID;
s->stack = NULL;
s->num_pieces = 0;
}
//Set square to empty
set_empty(square * s){
s->type = VALID;
s->stack = NULL;
s->num_pieces = 0;
}
//Set square to green indicating that the top of the stack contains a green piece
set_green(square * s){
s->type = VALID;
s->stack = (piece *) malloc (sizeof(piece));
s->stack->p_colour = GRN;
s->stack->next = NULL;
s->bottom = s->stack;
s->num_pieces = 1;
}
//Set square to red indicating that the top of the stack contains a red piece
set_red(square * s){
s->type = VALID;
s->stack = (piece *) malloc (sizeof(piece));
s->stack->p_colour = RED;
s->stack->next = NULL;
s->bottom = s->stack;
s->num_pieces = 1;
}
//Function to create the game board, initializing the invalid squares, empty squares and the squares with the starting
//player pieces
void create_board(square board [BOARD_SIZE][BOARD_SIZE]) {
    //Nested for loops to set the squares of the game board
    for(int i=0; i< BOARD_SIZE; i++) {
        for(int j=0; j< BOARD_SIZE; j++) {
            //If statement to set the invalid squares
            if ((i == 0 && (j == 0 || j == 1 || j == 6 || j == 7)) || (i == 1 && (j == 0 || j == 7)) || (i == 6 && (j == 0 || j == 7)) || (i == 7 && (j == 0 || j == 1 || j == 6 || j == 7))) {
                set_invalid(&board[i][j]);
            }
            //Else statement to set the rest of the squares to empty or with a player's piece on top
            else {
                //If statement to set the empty squares of the game board
                if (i == 0 || i == 7 || j == 0 || j == 7) {
                    set_empty(&board[i][j]);
                }
                //Else statement to set the squares with player pieces on top of the square
                else {
                    //Conditional statement to set the red squares
                    if ((i % 2 == 1 && (j < 3 || j > 4)) ||
                        (i % 2 == 0 && (j == 3 || j == 4))) {
                        set_red(&board[i][j]);
                    }
                    //Setting the green squares
                    else {
                        set_green(&board[i][j]);
                    }
                }
            }
        }
    }
}