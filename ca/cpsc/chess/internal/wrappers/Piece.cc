/*
 * Piece.cpp
 *
 *  Created on: Sep 4, 2015
 *      Author: anvik
 */

#include "Piece.h"

Piece::Piece(const colour c, const char s) : symbol{s}, player {c}{
    alive = true;
}

bool Piece::isAlive() const {
    return alive;
}

void Piece::kill() {
    alive = false;
}
