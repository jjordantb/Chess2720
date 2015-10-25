//
// Created by Jordan Florchinger on 10/25/2015.
//

#include "PawnStrategy.h"

std::vector<Coord*> PawnStrategy::path(Coord *start, Coord *end) {
    std::vector<Coord*> cords;
    if (start->getY() == end->getY() && abs(start->getX() - end->getX()) == 1) {
        cords.push_back(end);
    }
    return cords;
}