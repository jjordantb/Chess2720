//
// Created by jorda on 10/25/2015.
//

#ifndef CHESS2720_ROOKSTRATEGY_H
#define CHESS2720_ROOKSTRATEGY_H


#include "../../generic/Movement.h"

/*
 * Movement algorithm for rook
 */
class RookStrategy : public Movement {

public:
    std::vector<Coord*> path(Coord* start, Coord* end);

};


#endif //CHESS2720_ROOKSTRATEGY_H
