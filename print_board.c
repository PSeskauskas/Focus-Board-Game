//Including the standard input/output header file and the print_board header file that contains the function prototype
#include <stdio.h>
#include "print_board.h"
//Function to print the game board to the terminal at the beginning of the game and after each turn
void print_board(square board[BOARD_SIZE][BOARD_SIZE]) {
    printf("This is how the game board currently looks: \n");
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            //If the current square is a valid square i.e. stacks can be placed here, then this segment of the code is
            //executed
            if(board[i][j].type == VALID) {
                //If the current square is empty, it is shown as |  | in the terminal
                if(board[i][j].stack == NULL) {
                    printf("|    ");
                }
                //If the current square has a stack on it, then it is shown as either | G | or | R | in the terminal
                //I also print the size of each stack inside the corresponding square to the terminal
                else {
                    if(board[i][j].stack->p_colour == GRN) {
                        printf("| G %d", board[i][j].num_pieces);
                    } else {
                        printf("| R %d", board[i][j].num_pieces);
                    }
                }
            }
            //If the current square is an invalid square, i.e. you can't move to this square because it is not allowed
            //in the game rules, this square is shown as | * |
            else {
                printf("| ** ");
            }
        }
        //Printing a new line after each row of the board
        printf("|\n");
    }
}