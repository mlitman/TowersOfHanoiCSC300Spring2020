#include "Tower.hpp"
#include <iostream>

int main()
{
    Tower* t1 = new Tower(1);
    Tower* t2 = new Tower(2);
    Tower* t3 = new Tower(3);
    t1->push(new Disk(8));
    t1->push(new Disk(4));
    t1->push(new Disk(2));
    t1->display();
    t2->display();
    t3->display();

    t2->push(t1->pop());
    t3->push(t1->pop());

    t1->display();
    t2->display();
    t3->display();

    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    std::cout << "the number you entered is: " << num << "\n";



    return 0;
}