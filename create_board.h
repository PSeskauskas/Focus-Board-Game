#ifndef ASSIGNMENT_2_19369726_CREATE_BOARD_H
#define ASSIGNMENT_2_19369726_CREATE_BOARD_H
//Defining the size of the game board which is 8x8
#define BOARD_SIZE 8
//Declaring the enumeration that contains the colours of the players' pieces, Red or Green
typedef enum colour
{
    RED, GRN
}colour;
//Declaring the enumeration that contains the types of the squares, either Valid or Invalid
typedef enum square_type
{
    VALID, INVALID
}square_type;
//Declaring the struct that contains the associated colour of the top piece of a stack, and a pointer to the next
//piece of the corresponding stack
typedef struct piece
{
    colour p_colour;
    struct piece * next;
}piece;
//Declaring the struct that contains the variables and pointers for each square of the board, including pointers to
//a singular piece on the square, or the top piece of the stack and the bottom piece of the corresponding stack
typedef struct square
{
    square_type type;
    piece * stack;
    piece * bottom;
    int num_pieces;
}square;
//Struct containing the name of each player, the number of captured pieces that are kept or thrown away and the
//corresponding colour of the player
typedef struct players
{
    char playername[20];
    int kept;
    int thrown_away;
    colour player_colour;
}players;
//Function prototype to create the game board
void create_board(square board[BOARD_SIZE][BOARD_SIZE]);
#endif
