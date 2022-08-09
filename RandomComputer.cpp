#include "Computer.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class RandomComputer : public Computer
{
    RandomComputer()
    {
        char moves[3] = {'R', 'P', 'S'};
        srand(time(0));
        int random = rand() % 3;
        this->move = moves[random];
    }
};