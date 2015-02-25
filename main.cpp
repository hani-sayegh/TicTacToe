#include <iostream>
#include "Board.h"
#include "Computer.h"

int main()
{
    // Create a board
    std::cout << "Welcome to my tic tac toe game!" << std::endl;
    std::cout << "Which target would you like to hit?" << std::endl;

    Board b;
    b.displayBoard();
    std::cout <<  std::endl;

    while(b.getOpenSpaces())
    {
        //Player
        std::string input;
        std::cin >> input;
        while (!(b.updateBoard(input, "X"))) {
            std::cout << "This position has already been chosen, choose another..." << std::endl;
            std::cin >> input;
        }
        b.displayBoard();

        if(b.check("X"))
        {

            std::cout << "Hani has won" <<  std::endl;
            return 0;
        }
        // Computer
        Computer c; // Careful

        std::cout << std::endl;
        //Computer
        while (!(b.updateBoard(c.play(), "o")) && b.getOpenSpaces()); // Can improve performance here
        b.displayBoard();

        if(b.check("o"))
        {

            std::cout << "Computer has won" <<  std::endl;
            return 0;
        }
        std::cout << "Which target would you like to hit next?" << std::endl;
    }

    std::cout << "We have a tie" << std::endl;

    return 0;
}
