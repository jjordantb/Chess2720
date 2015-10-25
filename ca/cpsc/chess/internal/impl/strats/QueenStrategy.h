//
// Created by Jordan Florchinger on 10/25/2015.
//

#ifndef CHESS2720_QUEENSTRATEGY_H
#define CHESS2720_QUEENSTRATEGY_H


#include "../../generic/Movement.h"

/*
 * Movement algorithm for queen
 */
class QueenStrategy : public Movement {

public:
    std::vector<Coord*> path(Coord* start, Coord* end);

};


#endif //CHESS2720_QUEENSTRATEGY_H
