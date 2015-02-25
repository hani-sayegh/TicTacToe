#include <string>
#include <iostream>

class InputHandler
{
    public:
        static std::string getInput()
        {
            std::string input = "";
            std::cin >> input;
            std::cout << input << std::endl;
        }
};

int main()
{
    InputHandler::getInput();
    std::cout << "Hi" << std::endl;
}
