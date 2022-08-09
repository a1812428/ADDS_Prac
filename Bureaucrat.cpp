#include "Computer.h"
#include <iostream>
using namespace std;

class Bureaucrat : public Computer
{
    Bureaucrat()
    {
        this->move = 'P';
    }
};