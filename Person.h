#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Person : public Player{
    public:
        void move();
};

#endif //PERSON_H