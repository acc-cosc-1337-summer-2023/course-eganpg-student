//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_3_h
#define TIC_TAC_TOE_3_h

class TicTacToe3 : public TicTacToe
{
    public:
        TicTacToe3(): TicTacToe(3){}
    private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;
};

#endif 