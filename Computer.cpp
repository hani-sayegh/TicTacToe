#include "Computer.h"
#include "Board.h"
#include <random>
#include <iostream>


Computer::Computer()
{
}

std::string Computer::play()
{
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist9(1,9);
    auto row = dist9(rng);


    return std::to_string(row);
//    auto coloumn = rand() % 3 + 1;

//    Position r;

//    if(row == 1)
//    {
//        if(coloumn == 1)
//        {
//            return "A1";
//
//        }
//        else if(coloumn == 2)
//        {
//            return "A2";
//        }
//        else if(coloumn == 3)
//        {
//            return "A3";
//        }
//    }
//    else if(row == 2)
//    {
//        if(coloumn == 1)
//        {
//            return "B1";

//        }
//        else if(coloumn == 2)
//        {
//            return "B2";
//        }
//        else if(coloumn == 3)
//        {
//            return "B3";
//        }
//    }
//    else if(row == 3) {
//        if (coloumn == 1)
//        {
//            return "C1";
//        }
//        else if (coloumn == 2)
//        {
//            return "C2";
//        }
//        else if (coloumn == 3)
//        {
//            return "C3";
//        }
//    }

}

