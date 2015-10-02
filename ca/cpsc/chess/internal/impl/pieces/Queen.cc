//
// Created by jorda on 10/2/2015.
//

#include "Queen.h"

Queen::Queen(bool isBlack) : Piece::Piece(isBlack) {
    Queen::isBlack = isBlack;
}

char Queen::getSymbol() {
    return isBlack ? 'Q' : 'q';
}