//
// Created by Jordan Florchinger on 10/24/2015.
//

#ifndef CHESS2720_KINGSTRATEGY_H
#define CHESS2720_KINGSTRATEGY_H


#include "Movement.h"

/*
 * Movement algorithm for king
 */
class KingStrategy : public Movement {

public:
    std::vector<Coord*> path(Coord* start, Coord* end);

};


#endif //CHESS2720_KINGSTRATEGY_H
