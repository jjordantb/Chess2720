//
// Created by jorda on 10/25/2015.
//

#ifndef CHESS2720_PAWNSTRATEGY_H
#define CHESS2720_PAWNSTRATEGY_H


#include "../../generic/Movement.h"

class PawnStrategy : public Movement {

public:
    std::vector<Coord*> path(Coord* start, Coord* end);

};


#endif //CHESS2720_PAWNSTRATEGY_H
