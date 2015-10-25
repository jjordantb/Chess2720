//
// Created by jorda on 10/24/2015.
//

#ifndef CHESS2720_MOVEMENT_H
#define CHESS2720_MOVEMENT_H


#include "../wrappers/Coord.h"
#include <vector>
#include <stdlib.h>

/*
 * Controls movement of a piece with validation
 */
class Movement {

public:
    /*
     * Virtual method that returns vector of coords for valid movement
     * returns empty if not valid movement?
     */
    virtual std::vector<Coord*> path(Coord* start, Coord* end) = 0;

};


#endif //CHESS2720_MOVEMENT_H
