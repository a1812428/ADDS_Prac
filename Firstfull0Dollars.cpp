#include "Computer.h"
#include <iostream>
using namespace std;

class Firstfull0Dollars : public Computer
{
public:
    int count = 0;
    Firstfull0Dollars()
    {
        char moves[3] = {'R', 'P', 'P'};
        this->move = moves[count];
        this->count++;
    }
};