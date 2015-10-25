//
// Created by jorda on 10/25/2015.
//

#include "RookStrategy.h"

std::vector<Coord*> RookStrategy::path(Coord *start, Coord *end) {
    std::vector<Coord*> cords;
    if (start->getX() == end->getX()) {
        if (start->getY() > end->getY()) {
            for (int i = start->getY() - 1; i >= end->getY(); --i) {
                cords.push_back(new Coord(end->getX(), i));
            }
        } else {
            for (int i = start->getY() + 1; i <= end->getY() ; ++i) {
                cords.push_back(new Coord(end->getX(), i));
            }
        }
    } else if (start->getY() == end->getY()) {
        if (start->getX() > end->getX()) {
            for (int i = start->getX() - 1; i > abs(start->getX() - end->getX()); --i) {
                cords.push_back(new Coord(i, end->getY()));
            }
        } else {
            for (int i = start->getX() + 1; i < abs(start->getX() - end->getX()) + 1; ++i) {
                cords.push_back(new Coord(i, start->getY()));
            }
        }
    }
    return cords;
}