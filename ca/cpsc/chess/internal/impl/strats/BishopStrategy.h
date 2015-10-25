//
// Created by jorda on 10/25/2015.
//

#ifndef CHESS2720_BISHOPSTRATEGY_H
#define CHESS2720_BISHOPSTRATEGY_H


#include "../../generic/Movement.h"

class BishopStrategy : public Movement {

public:
    std::vector<Coord*> path(Coord *start, Coord *end);

};


#endif //CHESS2720_BISHOPSTRATEGY_H
