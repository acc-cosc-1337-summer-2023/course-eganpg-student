#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<memory>
using std::cout; using std::cin; using std::string;
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
int main() 
{
	int game_choice;
	std::unique_ptr<TicTacToe> game;
	string first_player;
	char user_choice = 'y';

	std::cout << "Choose game type:\n";
    std::cout << "1. TicTacToe 3x3\n";
    std::cout << "2. TicTacToe 4x4\n";
    std::cin >> game_choice;

	if (game_choice == 1) {
        game = std::make_unique<TicTacToe3>();
    } else if (game_choice == 2) {
        game = std::make_unique<TicTacToe4>();
    } else {
        std::cout << "Invalid choice.\n";
        return 1;
    }

	do
	{
		cout<<"Enter first player: ";
		cin>>first_player;

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();
		}


		cout<<"Play again? ";
		cin>>user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');
	
	return 0;
}