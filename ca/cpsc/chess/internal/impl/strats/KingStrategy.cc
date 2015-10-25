//
// Created by jorda on 10/24/2015.
//

#include "KingStrategy.h"
#include "../../../Game.h"

std::vector<Coord*> KingStrategy::path(Coord *start, Coord *end) {
    std::vector<Coord*> coords;
    if (abs(start->getX() - end->getX()) == 1 || abs(start->getY() - end->getY()) == 1) {
        coords.push_back(end);
    }
    return coords;
}