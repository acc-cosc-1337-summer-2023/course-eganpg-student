//cpp
//Comment to rename commit to hw 4
#include "tic_tac_toe.h"
#include<iostream>
#include<cmath>

using std::cout;

bool TicTacToe::game_over()
{
    // Check for column, row, or diagonal win
    if (check_column_win() || check_row_win() || check_diagonal_win()) {
        // If there is a win, winner is already set in the respective functions
        return true;
    }
    // If the board is full and there is no win, it's a tie
    if (check_board_full()) {
        winner = "C";  // 'C' represents a tie
        cout<<"There is a tie \n";
        return true;
    }
    // If there is no win and the board is not full, the game is not over
    return false;
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();

}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::display_board() const
{
    for(long unsigned int i=0; i < pegs.size(); i += std::sqrt(pegs.size()))
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2];

        if(pegs.size() == 16)
        {
            cout<<"|"<<pegs[i+3];
        }
        cout<<"\n";
    }
}

std::string TicTacToe::get_winner() {
        return winner;
    }






// Private Functions


void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0; i <pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_column_win(){
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


bool TicTacToe::check_row_win(){
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


bool TicTacToe::check_diagonal_win(){
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

void TicTacToe::set_winner() {
    // If player is X set winner to O
    if (player == "X") {
        winner = "O";
        std::cout<<"The winner is: "<<winner<<"\n";
    } 
    // otherwise set winner to X
    else {
        winner = "X";
        std::cout<<"The winner is: "<<winner<<"\n";
    }
}