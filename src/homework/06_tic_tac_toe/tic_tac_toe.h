//h
//Comment to rename commit to hw 4

#include<string>
#include<vector>
#include<math.h>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
    public:
        TicTacToe(int size) : pegs(size*size, " "){}
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const{return player;}
        void display_board() const;
        std::string get_winner();
        void set_winner();
    protected:
        std::vector<std::string> pegs; 
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
    
    private:
        std::string player;
        std::string winner;

        void clear_board();
        void set_next_player();
        bool check_board_full();
        
        

};

#endif