#include "Computer.h"
#include <iostream>
using namespace std;

class PaperDoll : public Computer
{
public:
    int count = 0;
    PaperDoll()
    {
        char moves[3] = {'P', 'S', 'S'};
        this->move = moves[count];
        this->count++;
    }
};