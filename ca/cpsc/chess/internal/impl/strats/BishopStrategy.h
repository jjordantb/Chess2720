//
// Created by Jordan Florchinger on 10/25/2015.
//

#ifndef CHESS2720_BISHOPSTRATEGY_H
#define CHESS2720_BISHOPSTRATEGY_H


#include "../../generic/Movement.h"

/*
 * Movement algorithm for bishop
 */
class BishopStrategy : public Movement {

public:
    std::vector<Coord*> path(Coord *start, Coord *end);

};


#endif //CHESS2720_BISHOPSTRATEGY_H
