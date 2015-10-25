//
// Created by jorda on 10/25/2015.
//

#ifndef CHESS2720_PLAYERTWOSTATE_H
#define CHESS2720_PLAYERTWOSTATE_H


#include "State.h"

class PlayerTwoState : public State{

public:
    const bool accept(const char c);
    const char getID();

};


#endif //CHESS2720_PLAYERTWOSTATE_H
