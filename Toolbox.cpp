#include "Computer.h"
#include <iostream>
using namespace std;

class Toolbox : public Computer
{
    Toolbox()
    {
        this->move = 'S';
    }
};