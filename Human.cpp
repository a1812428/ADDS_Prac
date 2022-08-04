#include "Human.h"
#include <iostream>
using namespace std;

Human::Human()
{
    // cin >> this->move;
}

char Human::makeMove()
{
    cin >> this->move;
    return this->move;
}