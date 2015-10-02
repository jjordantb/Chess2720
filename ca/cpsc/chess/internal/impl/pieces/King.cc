//
// Created by jorda on 10/2/2015.
//

#include "King.h"

King::King(bool isBlack) : Piece::Piece(isBlack) {
    King::isBlack = isBlack;
}

char King::getSymbol() {
    return isBlack ? 'K' : 'k';
}