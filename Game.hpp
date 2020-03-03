#include <iostream>
#include "Tower.hpp"

class Game
{
    public:
        Game();
        void displayBoard();
        void playGame();

    private: 
        Tower* t1;
        Tower* t2;
        Tower* t3;
        Tower* theTowers[3];
};

