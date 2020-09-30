//Including the move stack header file that contains the function prototype to move a player's chosen stack to a new
//position
#include "move_stack.h"
//Including the standard input/output header file
#include <stdio.h>
//Including the print board header file that contains the function prototype to print the game board to the terminal
#include "print_board.h"
//Including the standard library header file
#include <stdlib.h>
//Function to move a player's chosen stack to a new position on the board and place the stacks on top of each other
void move_stack(square *start, square *destination, square board[BOARD_SIZE][BOARD_SIZE], players *player){
    //Setting the bottom of the chosen stack to the top of the destination stack
    start->bottom->next = destination->stack;
    //Storing the newly created stack as the destination stack
    destination->stack = start->stack;
    //If the bottom of the destination stack equals NULL, it is given the value of the starting stack
    if(destination->bottom == NULL) {
        destination->bottom = start->bottom;
    }
    //Declaring that the first chosen stack is now empty
    start->stack = NULL;
    start->bottom = NULL;
    //Keeping a running total of the size of the current stack
    destination->num_pieces += start->num_pieces;
    //Setting the number of pieces of the empty square to 0
    start->num_pieces = 0;
    //Calling the print board function
    print_board(board);
    //If the size of the new stack is greater than 5, then this function calls the function to remove the bottom piece
    if(destination->num_pieces > 5) {
        remove_bottom_pieces(player, destination, board);
    }
}
//Function to add a captured piece that was kept by the player to an empty square on the game board
void add_piece_to_empty_square(players *player, square *destination, square board [BOARD_SIZE][BOARD_SIZE]) {
    //Allocating memory for the empty square
    destination->stack = (piece *)malloc(sizeof(piece));
    //Setting the colour of the piece on the stack to the colour of the player
    destination->stack->p_colour = player->player_colour;
    //Setting the pointer to the next piece to NULL because there's only one piece on that square
    destination->stack->next = NULL;
    //The bottom of the stack is the top of the stack because there is only one piece on the board
    destination->bottom = destination->stack;
    //Initializing the number of pieces on the square to 1
    destination->num_pieces = 1;
    //Calling the function to print the game board
    print_board(board);
}
//Function to add a captured piece that was kept by the player to the top of a stack on the game board
void add_piece_to_stack(players *player, square *destination, square board [BOARD_SIZE][BOARD_SIZE]) {
    //Creating a new piece that will contain one of the captured pieces by the player that were kept
    struct piece * newPiece = (piece *)malloc(sizeof(piece));
    //If the memory was allocated correctly, this segment of code is executed
    if(newPiece != NULL) {
        //This piece is given the colour of the player
        newPiece->p_colour = player->player_colour;
        //The next pointer of the new piece points to the top of the destination stack
        newPiece->next = destination->stack;
        //The top of the destination stack is given the new piece
        destination->stack = newPiece;
        //Keeping a running total of the size of the current stack
        ++destination->num_pieces;
    }
    //Calling the function to print the board
    print_board(board);
    //If the size of the new stack is greater than 5, then this function calls the remove bottom piece function
    if(destination->num_pieces > 5) {
        remove_bottom_pieces(player, destination, board);
    }
}
//Function to remove the bottom piece of a stack when the size of the stack exceeds 5 pieces
void remove_bottom_pieces(players *player, square *destination, square board[BOARD_SIZE][BOARD_SIZE]) {
    //Create a pointer to the 6th piece of the stack
    piece * currentPtr = destination->stack->next->next->next->next->next;
    //While the pointer isn't NULL, then this segment of code is executed
    while(currentPtr != NULL) {
        //Create a temporary pointer to store the value of the current pointer
        piece * tempPtr = currentPtr;
        //Set the current pointer to the next piece of the stack
        currentPtr = currentPtr->next;
        //If the colour of the pointer equals the colour of the corresponding player, then that player keeps the
        //bottom piece
        if(tempPtr->p_colour == player->player_colour) {
            player->kept += 1;
            free(tempPtr);
        }
        //If the colour of the pointer doesn't equal the colour of the corresponding player, then that player discards
        //the bottom piece
        else {
            ++player->thrown_away;
            free(tempPtr);
        }
    }
    //Setting the number of pieces on the stack to 5, after removing the bottom pieces
    destination->num_pieces = 5;
    //Setting the pointer to the next piece after the bottom piece to NULL
    destination->stack->next->next->next->next->next = NULL;
    //Setting the bottom of the stack to the last piece of the stack
    destination->bottom = destination->stack->next->next->next->next;
    //Calling the function to print the game board
    print_board(board);
}