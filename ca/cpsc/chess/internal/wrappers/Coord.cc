//
// Created by jorda on 10/24/2015.
//

#include "Coord.h"

Coord::Coord(const int x, const int y) {
    Coord::x = x;
    Coord::y = y;
}

int Coord::getX() const {
    return x;
}

int Coord::getY() const {
    return y;
}