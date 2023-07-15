#include "tic_tac_toe_3.h"
// #include "tic_tac_toe.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe3::check_column_win()
{
        // loop over the 3 columns
    for (int i = 0; i < 3; ++i) {
        // if the column isn't blank, check the other spaces in the column, if they are full and equal, winner
        if (pegs[i] != " " && pegs[i] == pegs[i + 3] && pegs[i] == pegs[i + 6]) {
            set_winner();
            return true;
        }
    }
    return false;
}

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool TicTacToe3::check_row_win()
{
        // loop over the rows
    for (int i = 0; i < 9; i += 3) {
        // if the row isn't blank and the other spaces in the row are equal, winner winner chicken dinner
        if (pegs[i] != " " && pegs[i] == pegs[i + 1] && pegs[i] == pegs[i + 2]) {
            set_winner();
            return true;
        }
    }
    return false;
}

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/

bool TicTacToe3::check_diagonal_win()
{
        // if the spaces aren't blank check one of the diaganols
    if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8]) {
        set_winner();
        return true;
    }
    // if the other spaces aren't blank check the other diaganol
    if (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6]) {
        set_winner();
        return true;
    }
    return false;
}