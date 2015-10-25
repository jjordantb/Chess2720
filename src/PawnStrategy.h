//
// Created by Jordan Florchinger on 10/25/2015.
//

#ifndef CHESS2720_PAWNSTRATEGY_H
#define CHESS2720_PAWNSTRATEGY_H


#include "Movement.h"

/*
 * Movement algorithm for pawn
 */
class PawnStrategy : public Movement {

public:
    std::vector<Coord*> path(Coord* start, Coord* end);

};


#endif //CHESS2720_PAWNSTRATEGY_H
