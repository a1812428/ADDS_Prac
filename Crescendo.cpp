#include "Computer.h"
#include <iostream>
using namespace std;

class Crescendo : public Computer
{
    public : 
    int count = 0;
    Crescendo()
    {
        char moves[3] = {'P', 'S', 'R'};
        this->move = moves[count];
        this->count++;
    }
};