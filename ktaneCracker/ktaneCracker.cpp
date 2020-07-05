#include "ktaneCracker.h"

int getModule()
{
    // gets current active module
    int moduleID{};
    std::cout << "1) Simple Wires\n";
    std::cout << "2) Button\n";
    std::cout << "3) Keypad\n";
    std::cout << "4) Simon Says\n";
    std::cout << "5) Who\'s On First\n";
    std::cout << "6) Memory\n";
    std::cout << "7) Morse Code\n";
    std::cout << "8) Complex Wires\n";
    std::cout << "9) Wire Sequences\n";
    std::cout << "10) Maze\n";
    std::cout << "11) Password\n";
    std::cout << "Enter Module Number (0 to quit): ";
    std::cin >> moduleID;
    return moduleID;
    
}

int main()
{
    KtaneCracker myBomb; // This bomb instance

    do
    {
        
        myBomb.isValidModule = true;
        switch (getModule())
        {
        case Modules::EXIT:
            return 0; // kills program given exit code
        case Modules::SIMPLE_WIRES:
        {
            SimpleWires module;
            myBomb.isFinished = true;
            break;
        } 
        case Modules::BUTTON:
            break;
        case Modules::KEYPAD:
            break;
        case Modules::SIMON_SAYS:
            break;
        case Modules::WHOS_ON_FIRST:
            break;
        case Modules::MEMORY:
            break;
        case Modules::MORSE_CODE:
            break;
        case Modules::COMPLEX_WIRES:
            break;
        case Modules::WIRE_SEQUENCES:
            break;
        case Modules::MAZE:
            break;
        case Modules::PASSWORD:
            break;
        default:
            // anything other than above will loop query
            std::cout << "Error!\n";
            myBomb.isValidModule = false;
        }
    } while (!myBomb.isValidModule || myBomb.isFinished);
    

}
