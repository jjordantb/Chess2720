//
// Created by Jordan Florchinger on 10/25/2015.
//

#ifndef CHESS2720_STATE_H
#define CHESS2720_STATE_H

#include <string>

/*
 * State pattern for player turns
 */
class State {
public:
    /*
     * Validates the selected piece so that it belongs to player
     */
    virtual const bool accept(const char c) = 0;

    /*
     * Player ID
     */
    virtual const char getID() = 0;
};


#endif //CHESS2720_STATE_H
