//
// Created by jorda on 9/29/2015.
//

#include "Piece.h"

Piece::Piece(bool isBlack) {
    Piece::isBlack = isBlack;
}

const bool Piece::isAlive() {
    return alive;
}

const void Piece::kill() {
    alive = false;
}

Piece::~Piece() {

}