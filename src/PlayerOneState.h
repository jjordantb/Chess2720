//
// Created by jorda on 10/25/2015.
//

#ifndef CHESS2720_PLAYERONESTATE_H
#define CHESS2720_PLAYERONESTATE_H


#include "State.h"

class PlayerOneState : public State {

public:
    const bool accept(const char c);
    const char getID();

};


#endif //CHESS2720_PLAYERONESTATE_H
