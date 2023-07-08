#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
//Comment to rename commit to hw 4
TEST_CASE("Test game over class function")
{
	TicTacToe game;
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	// REQUIRE(game.game_over() == false);

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test game over with tie") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Mark the board 9 times
    // for (int i = 1; i <= 9; ++i) {
    //     game.mark_board(i);
    // }

	// Create a forced tie manually

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);

	// Set the game as game over
	REQUIRE(game.game_over() == true);

    // Verify the winner is C (indicating a tie)
    REQUIRE(game.get_winner() == "C");
}


TEST_CASE("Test first player set to X") {
    // Create an instance of TicTacToe
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Verify that get_player() returns X
    REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O") {
    // Create an instance of TicTacToe
    TicTacToe game;

    // Start the game with player O
    game.start_game("O");

    // Verify that get_player() returns O
    REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Set positions for first player X to 1,4,7 and others for O
    game.mark_board(1); // X
    game.mark_board(2); // O
    game.mark_board(4); // X
    game.mark_board(3); // O
    game.mark_board(7); // X

    // Verify that game_over() is true
    REQUIRE(game.game_over() == true);

    // Verify that winner is X
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second column") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Set positions for first player X to 2,5,8 and others for O
    game.mark_board(2); // X
    game.mark_board(1); // O
    game.mark_board(5); // X
    game.mark_board(3); // O
    game.mark_board(8); // X

    // Verify that game_over() is true
    REQUIRE(game.game_over() == true);

    // Verify that winner is X
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third column") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Set positions for first player X to 2,5,8 and others for O
    game.mark_board(3); // X
    game.mark_board(1); // O
    game.mark_board(6); // X
    game.mark_board(4); // O
    game.mark_board(9); // X

    // Verify that game_over() is true
    REQUIRE(game.game_over() == true);

    // Verify that winner is X
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by first row") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Set positions for first player X to 1,2,3 and others for O
    game.mark_board(1); // X
    game.mark_board(4); // O
    game.mark_board(2); // X
    game.mark_board(5); // O
    game.mark_board(3); // X

    // Verify that game_over() is true
    REQUIRE(game.game_over() == true);

    // Verify that winner is X
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Set positions for first player X to 4,5,6 and others for O
    game.mark_board(4); // X
    game.mark_board(1); // O
    game.mark_board(5); // X
    game.mark_board(2); // O
    game.mark_board(6); // X

    // Verify that game_over() is true
    REQUIRE(game.game_over() == true);

    // Verify that winner is X
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third row") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Set positions for first player X to 7,8,9 and others for O
    game.mark_board(7); // X
    game.mark_board(1); // O
    game.mark_board(8); // X
    game.mark_board(2); // O
    game.mark_board(9); // X

    // Verify that game_over() is true
    REQUIRE(game.game_over() == true);

    // Verify that winner is X
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Set positions for first player X to 1,5,9 and others for O
    game.mark_board(1); // X
    game.mark_board(2); // O
    game.mark_board(5); // X
    game.mark_board(3); // O
    game.mark_board(9); // X

    // Verify that game_over() is true
    REQUIRE(game.game_over() == true);

    // Verify that winner is X
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left") {
    // Create an instance of TicTacToe game
    TicTacToe game;

    // Start the game with player X
    game.start_game("X");

    // Set positions for first player X to 7,5,3 and others for O
    game.mark_board(7); // X
    game.mark_board(1); // O
    game.mark_board(5); // X
    game.mark_board(2); // O
    game.mark_board(3); // X

    // Verify that game_over() is true
    REQUIRE(game.game_over() == true);

    // Verify that winner is X
    REQUIRE(game.get_winner() == "X");
}
