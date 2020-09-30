//Including the create board header file for the structs of the players and for the size of the board
#include "create_board.h"
//Including the player movement header file that contains the function prototypes for the players movement
#include "player_movement.h"
//Including the Bool header file
#include <stdbool.h>
//Including the print_board header file
#include "print_board.h"
//Including the player initialization header file
#include "player_initialization.h"
//Including the standard input/output header file
#include <stdio.h>
//Declaring the main function
int main(void) {
    //Initializing the number of stacks that correspond to each player
    int x = 18, y = 18;
    //Initializing pointers to point to the number of each players stacks
    int *xPtr;
    int *yPtr;
    xPtr = &x;
    yPtr = &y;
    //Declaring the game board and the size of the game board
    square board[BOARD_SIZE][BOARD_SIZE];
    //Declaring the structs containing the information of player 1 and player 2
    struct players player1;
    struct players player2;
    //Calling the function to initialize the players and their information
    initialize_players(&player1);
    initialize_players(&player2);
    //Initializing the colours of the two players
    player1.player_colour = RED;
    player2.player_colour = GRN;
    //Calling the function to create the board
    create_board(board);
    //Calling the function to print out the game board
    print_board(board);
    //Telling the players which colors they are in the game
    printf("%s, you are red\n", player1.playername);
    printf("%s, you are green\n", player2.playername);
    //Declaring the Boolean variable that will be used as the winning condition
    _Bool winner = false;
    //While there isn't a winner, the game continues
    while(winner == false) {
        //If both players have stacks on the board, player 1 makes their move
        if((*xPtr != 0) && (*yPtr != 0)) {
            printf("%s, ", player1.playername);
            player_move(&player1, board, xPtr, yPtr);
            printf("%s = Captured: %d, Kept: %d\n", player1.playername, player1.thrown_away, player1.kept);
        }
        //If both players have stacks on the board, player 2 makes their move
        if((*xPtr != 0) && (*yPtr != 0)) {
            printf("%s, ", player2.playername);
            player_move(&player2, board, xPtr, yPtr);
            printf("%s = Captured: %d, Kept: %d\n", player2.playername, player2.thrown_away, player2.kept);
        }
        //If one of the players has no stacks left on the board, then there is a winner
        if((*xPtr == 0) || (*yPtr == 0)) {
            //Set the Boolean variable to true
            winner = true;
        }
    }
    //If Player 1 has no stacks left on the board, then player 2 is the winner
    if(*xPtr == 0) {
        printf("WE HAVE A WINNER!!!!!!!!!!!\nCongratulations %s on winning this game\nYou captured %d of your opponent's pieces", player2.playername, player2.thrown_away);
    }
    //Else if Player 2 has no stacks left on the board, then player 1 is the winner
    else if(*yPtr == 0) {
        printf("WE HAVE A WINNER!!!!!!!!!!!\nCongratulations %s on winning this game\nYou captured %d of your opponent's pieces", player1.playername, player1.thrown_away);
    }
    return 0;
}