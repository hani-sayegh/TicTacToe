#pragma once

#include <array>
#include <string>


class Board
{
    using BoardWidth = std::array<int,3>::size_type ;
public: // Constructors and destructors
    Board();


public: // Memeber functions
    void displayBoard();
    bool updateBoard(const std::string&, const std::string&) ;
    bool check(const std::string &) const;
    unsigned int getOpenSpaces() const;


private: // Helper functions
    void createBoard();

private: // Data members
    std::array <std::array <std::string , 3 >, 3> board  ;
    BoardWidth N = board.size()  ;
    unsigned openSpaces = 9;

};
