//
// Created by jorda on 9/29/2015.
//

#include "Piece.h"

const bool Piece::isAlive() {
    return alive;
}

const void Piece::kill() {
    alive = false;
}

Piece::~Piece() {

}