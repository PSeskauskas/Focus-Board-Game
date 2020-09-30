//Including the player movement header file for the functions of the players and the create board header file for the size
//of the board
#include "player_movement.h"
#include "create_board.h"
//Including the move stack header file that contains the function prototype to move a player's chosen stack to a new
//square
#include "move_stack.h"
//Including the standard input/output header file and the Bool header file that contains the Boolean variable and the
//standard library header file
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//Function to take in the input of a player, the stack they want to move and where they want to move it to, depending
//on the size of the stack
void player_move(players *player, square board[BOARD_SIZE][BOARD_SIZE], int *num_stacks_red, int *num_stacks_green) {
    //Declaring the integer and Boolean variables used in the function
    int i = 0, j = 0, move = 0, k = 0, l = 0, x = 0, n = 0;
    _Bool correct = false;
    //If the user has captured pieces that they kept, this segment of code is executed
    if (player->kept > 0) {
        //Telling the user how many captured pieces they have that they kept, and asking the user for their input
        printf("you have %d kept pieces available, please choose 1 if you would like to use one, otherwise choose any other integer to move a stack\n", player->kept);
        scanf("%d", &n);
        //If the user chooses to use their captured piece(s), this segment of code is executed
        if (n == 1) {
            //The Boolean variable correct, stays false until the user moves the chosen stack a number of positions
            //corresponding to the size of the stack
            while (correct == false) {
                //User input for where they'd like to place a captured piece on the game board
                printf("Please enter the row and column of the stack/square that you would like to place your kept piece on\n");
                scanf("%d %d", &i, &j);
                //Decrementing i and j because in the program, rows and columns are initialized at 0 and not 1
                i--;
                j--;
                //If the user chooses an empty square, then the program sends the position of the empty square to a function
                if (board[i][j].stack == NULL && board[i][j].type == VALID) {
                    //Calling the function to add a player's piece to an empty square
                    add_piece_to_empty_square(player, &board[i][j], board);
                    //If the user chooses to place their piece on an empty square then the number of stacks they have is
                    //incremented by one
                    if (board[i][j].stack->p_colour == RED) {
                        (*num_stacks_red) = (*num_stacks_red) + 1;
                    } else if (board[i][j].stack->p_colour == GRN) {
                        (*num_stacks_green) = (*num_stacks_green) + 1;
                    }
                    //Decrementing the number of captured pieces the player has
                    --player->kept;
                    correct = true;
                }
                //If the user chooses to place their piece on top of a stack, this segment of code is executed
                else if(board[i][j].num_pieces > 0) {
                    //If the user is using green pieces and they place their captured piece on a red stack, then the number
                    //of stacks they have is incremented by 1 and the opponents stacks are decremented by 1
                    if (board[i][j].stack->p_colour == RED && player->player_colour == GRN) {
                        (*num_stacks_green) = (*num_stacks_green) + 1;
                        (*num_stacks_red) = (*num_stacks_red) - 1;
                    }
                        //If the user is using red pieces and they place their captured piece on a green stack, then the number
                        //of stacks they have is incremented by 1 and the opponents stacks are decremented by 1
                    else if (board[i][j].stack->p_colour == GRN && player->player_colour == RED) {
                        (*num_stacks_green) = (*num_stacks_green) - 1;
                        (*num_stacks_red) = (*num_stacks_red) + 1;
                    }
                    //If the user places their colour on top of a stack containing the same colour as the top piece, then
                    //the number of stacks doesn't change
                    //Calling the function to add a player's piece to the top of an existing stack
                    add_piece_to_stack(player, &board[i][j], board);
                    //Decrementing the number of captured pieces the player has
                    --player->kept;
                    correct = true;
                }
                //If the user chooses to place their piece on an invalid square, they are prompted to try again
                else if (board[k][l].type == INVALID || k > 7 || k < 0 || l > 7 || l < 0) {
                    printf("Error, you've chosen to place a kept piece onto an invalid square, please restart your turn\n");
                    correct = false;
                }
            }
        }
        //If the user chooses to not use their captured piece, then this segment of code is executed
        else if (n != 1) {
            //The Boolean variable correct, stays false until the user moves the chosen stack a number of positions
            //corresponding to the size of the stack
            while (correct == false) {
                //User input for the stack the player wants to move
                printf("please enter the row and column of the stack that you would like to move here: \n");
                scanf("%d %d", &i, &j);
                //Decrementing the i and j variables because the rows and columns in the program begin at 0 and not 1
                i--;
                j--;
                //If the user chooses an empty square or an invalid square, they are prompted to try again
                if (board[i][j].stack == NULL || board[i][j].type == INVALID) {
                    printf("Error, you have chosen an empty/invalid square, please try again\n");
                    correct = false;
                }
                //If the user chooses a stack with their own piece on top, then this segment of code is executed
                else if (board[i][j].stack->p_colour == player->player_colour) {
                    //Variables k and l are given the values of i and j
                    k = i;
                    l = j;
                    //For loop to take in where the player would like to move their chosen stack, the loop runs until the
                    //variable x reaches the size of the stack, incrementing/decrementing the variables k and l corresponding to
                    //the chosen player movement
                    for (x = 0; x < board[i][j].num_pieces; x++) {
                        printf("Please enter where you'd like to move the stack you selected, 8 = up, 2 = down, 4 = left, 6 = right\n");
                        scanf("%d", &move);
                        if (move == 8) {
                            k--;
                        } else if (move == 2) {
                            k++;
                        } else if (move == 4) {
                            l--;
                        } else if (move == 6) {
                            l++;
                        } else if (move != 2 || move != 4 || move != 6 || move != 8) {
                            printf("Error, you've pressed an incorrect number to move your stack, please try again\n");
                            x--;
                        }
                    }
                    //If the user moves to an invalid square, they are prompted to try again
                    if (board[k][l].type == INVALID || k > 7 || k < 0 || l > 7 || l < 0) {
                        printf("Error, you've moved your stack to an invalid square, please restart your move\n");
                        correct = false;
                    }
                    //If the user moves to an empty square, then the program allocates memory for that square and sends the
                    //original and final position of the stack to a move function
                    else if (board[k][l].stack == NULL) {
                        board[k][l].stack = (piece *) malloc(sizeof(piece));
                        board[k][l].bottom = NULL;
                        move_stack(&board[i][j], &board[k][l], board, player);
                        correct = true;
                    }
                    //If the user moves their stack on to another stack, then the program sends the original and final position
                    //of the stack to a move function
                    else {
                        //If the destination stack is red, then the number of red stacks is decremented by 1
                        if(board[k][l].stack->p_colour == RED) {
                            (*num_stacks_red) = (*num_stacks_red) - 1;
                        }
                        //Else if the destination stack is green, then the number of green stacks is decremented by 1
                        else if(board[k][l].stack->p_colour == GRN) {
                            (*num_stacks_green) = (*num_stacks_green) - 1;
                        }
                        //Calling the move stack function
                        move_stack(&board[i][j], &board[k][l], board, player);
                        correct = true;
                    }
                }
                //If the user chooses a stack that doesn't correspond to their colour, then this statement is printed, prompting
                //the user to try again
                else if (board[i][j].stack->p_colour != player->player_colour) {
                    printf("Error, incorrect stack chosen, you must choose a square with your piece on top, please try again\n");
                    correct = false;
                }
            }
        }
    }
    //If the user doesn't have any captured pieces, then this segment of code is executed
    else {
        //The Boolean variable correct, stays false until the user moves the chosen stack a number of positions
        //corresponding to the size of the stack
        while (correct == false) {
            //User input for the stack the player wants to move
            printf("please enter the row and column of the stack that you would like to move here: \n");
            scanf("%d %d", &i, &j);
            //Decrementing the i and j variables because the rows and columns in the program begin at 0 and not 1
            i--;
            j--;
            //If the user chooses an empty square or an invalid square, they are prompted to try again
            if (board[i][j].stack == NULL || board[i][j].type == INVALID) {
                printf("Error, you have chosen an empty/invalid square, please try again\n");
                correct = false;
            }
            //If the user chooses a stack with their own piece on top, then this segment of code is executed
            else if (board[i][j].stack->p_colour == player->player_colour) {
                //Variables k and l are given the values of i and j
                k = i;
                l = j;
                //For loop to take in where the player would like to move their chosen stack, the loop runs until the
                //variable x reaches the size of the stack, incrementing/decrementing the variables k and l corresponding to
                //the chosen player movement
                for (x = 0; x < board[i][j].num_pieces; x++) {
                    printf("Please enter where you'd like to move the stack you selected, 8 = up, 2 = down, 4 = left, 6 = right\n");
                    scanf("%d", &move);
                    if (move == 8) {
                        k--;
                    } else if (move == 2) {
                        k++;
                    } else if (move == 4) {
                        l--;
                    } else if (move == 6) {
                        l++;
                    } else if (move != 2 || move != 4 || move != 6 || move != 8) {
                        printf("Error, you've pressed an incorrect number to move your stack, please try again\n");
                        x--;
                    }
                }
                //If the user moves to an invalid square, they are prompted to try again
                if (board[k][l].type == INVALID || k > 7 || k < 0 || l > 7 || l < 0) {
                    printf("Error, you've moved your stack to an invalid square, please restart your move\n");
                    correct = false;
                }
                //If the user moves to an empty square, then the program allocates memory for that square and sends the
                //original and final position of the stack to a move function
                else if (board[k][l].stack == NULL) {
                    board[k][l].stack = (piece *) malloc(sizeof(piece));
                    board[k][l].bottom = NULL;
                    move_stack(&board[i][j], &board[k][l], board, player);
                    correct = true;
                }
                //If the user moves their stack on to another stack, then the program sends the original and final position
                //of the stack to a move function
                else {
                    //If the destination stack is red, then the number of red stacks is decremented by 1
                    if(board[k][l].stack->p_colour == RED) {
                        (*num_stacks_red) = (*num_stacks_red) - 1;
                    }
                    //Else if the destination stack is green, then the number of green stacks is decremented by 1
                    else if(board[k][l].stack->p_colour == GRN) {
                        (*num_stacks_green) = (*num_stacks_green) - 1;
                    }
                    //Calling the move stack function
                    move_stack(&board[i][j], &board[k][l], board, player);
                    correct = true;
                }
            }
            //If the user chooses a stack that doesn't correspond to their colour, then this statement is printed, prompting
            //the user to try again
            else if (board[i][j].stack->p_colour != player->player_colour) {
                printf("Error, incorrect stack chosen, you must choose a square with your piece on top, please try again\n");
                correct = false;
            }
        }
    }
}