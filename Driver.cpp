#include "Game.hpp"
#include <iostream>

using namespace std;

int main()
{
    Game* theGame = new Game();
    theGame->playGame();
    delete theGame;
    return 0;
}