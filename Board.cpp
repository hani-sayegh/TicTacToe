#include <iostream>
#include "Board.h"

Board::Board()
{
    createBoard();
}

void Board::displayBoard( )
{
    for(auto & e: board)
    {
        for(auto &e2: e)
        {
            std::cout <<  e2  << "\t";
        }
        std::cout << std::endl;
    }
}

bool Board::updateBoard(const std::string &in, const std::string &hitType) // If we have a const here then we can not modify this ???
{
    const  std::string &type = hitType;

    if(in == "1")
    {
        if(board[0][0] == "1")
        {
            board[0][0] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }

    }
    else if(in == "2")
    {
        if(board[0][1] == "2")
        {
            board[0][1] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(in == "3")
    {
        if(board[0][2] == "3")
        {
            board[0][2] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }
    }
    else  if(in == "4")
    {
        if(board[1][0] == "4")
        {
            board[1][0] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(in == "5")
    {
        if(board[1][1] == "5")
        {
            board[1][1] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(in == "6")
    {
        if(board[1][2] == "6")
        {
            board[1][2] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(in == "7")
    {
        if(board[2][0] == "7")
        {
            board[2][0] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(in == "8")
    {
        if(board[2][1] == "8")
        {
            board[2][1] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(in == "9")
    {
        if(board[2][2] == "9")
        {
            board[2][2] = type;
            --openSpaces;
            return true;
        }
        else
        {
            return false;
        }
    }

    //    const auto &index1 = in.at(0);
    //    const auto &index2 = in.at(1);
    //
    //    const bool conditionA = (index1 == 'A');
    //    const bool conditionB = (index1 == 'B');
    //    const bool conditionC = (index1 == 'C');
    //
    //    const bool condition1 = (index2 == '1');
    //    const bool condition2 = (index2 == '2');
    //    const bool condition3 = (index2 == '3');
    //
    //    if( conditionA)
    //    {
    //        if( condition1)
    //        {
    //            board[0][0] = "X";
    //        }
    //
    //        else if(condition2)
    //
    //            board[0][1] = "X";
    //        }
    //        else if(condition3)
    //        {
    //            board[0][2] = "X";
    //        }
    //    }
    //    else if( conditionB)
    //    {
    //        if( condition1)
    //        {
    //            board[1][0] = "X";
    //        }
    //
    //        else if(condition2)
    //        {
    //            board[1][1] = "X";
    //        }
    //        else if(condition3)
    //        {
    //            board[1][2] = "X";
    //        }
    //    }
    //    else if( conditionC)
    //    {
    //        if( condition1)
    //        {
    //            board[2][0] = "X";
    //        }
    //
    //        else if(condition2)
    //        {
    //            board[2][1] = "X";
    //        }
    //        else if(condition3)
    //        {
    //            board[2][2] = "X";
    //        }
    //    }
}

void Board::createBoard()
{
    for(auto i = N - N; i != N; ++i)
    {
        for(auto j = N - N; j != N; ++j)
        {
            auto &value = board[i][j];
            if( value == "")
            {
                value =  std::to_string( 3 * i + j + 1);
            }
            //            else if(value == "X")
            //            {
            //                value = "X";
            //            }
        }
    }

}


//void Board::setBoard(const size_t &row, const size_t &coloumn, std::string value)
//{
//
//}
bool Board::check(const std::string &hitType) const
{
const std::string &type = hitType;

    return  (board[0][0] == type && board[0][1] == type && board[0][2] == type) || // row
            (board[1][0] == type && board[1][1] == type && board[1][2] == type) || // row
            (board[2][0] == type && board[2][1] == type && board[2][2] == type) || // row
            (board[0][0] == type && board[1][0] == type && board[2][0] == type) || // coloumn
            (board[0][1] == type && board[1][1] == type && board[2][1] == type) || // coloumn
            (board[0][2] == type && board[1][2] == type && board[2][2] == type) || // coloumn
            (board[0][0] == type && board[1][1] == type && board[2][2] == type) || // diagonal
            (board[0][2] == type && board[1][1] == type && board[2][0] == type) ;  // diagonal
}

unsigned int Board::getOpenSpaces() const {
        return openSpaces;
}
