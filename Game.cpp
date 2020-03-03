#include "Game.hpp"

using namespace std;

Game::Game()
{
    this->t1 = new Tower(0);
    this->t2 = new Tower(1);
    this->t3 = new Tower(2);

    t1->push(new Disk(8));
    t1->push(new Disk(4));
    t1->push(new Disk(2));

    this->theTowers[0] = this->t1;
    this->theTowers[1] = this->t2;
    this->theTowers[2] = this->t3;
}
Game::~Game()
{
    delete this->t1;
    delete this->t2;
    delete this->t3;
}

void Game::playGame()
{
    int source, dest;
    while(this->theTowers[2]->getCount() < 3)
    {
        this->displayBoard();
        cout << "Enter Source Tower: ";
        cin >> source;
        
        if(!this->theTowers[source]->peek())
        {
            //the source tower was not legal
            cout << "Illegal Source Tower: " << source << "\n";
            continue;
        }
        
        //souce was legal
        cout << "Enter Destination Tower: ";
        cin >> dest;

        Disk* tempSource = this->theTowers[source]->peek();
        Disk* tempDest = this->theTowers[dest]->peek();
        if(!tempDest || tempSource->getSize() < tempDest->getSize())
        {
            this->theTowers[dest]->push(this->theTowers[source]->pop());
        }
        else
        {
            cout << "Illegal Destination Tower: " << dest << "\n";
            continue;
        } 
    }
    this->displayBoard();
    cout << "WINNER!!!!!!!!!\n";
}

void Game::displayBoard()
{
    cout << "\n\n**********\n";
    this->theTowers[0]->display();
    this->theTowers[1]->display();
    this->theTowers[2]->display();
}