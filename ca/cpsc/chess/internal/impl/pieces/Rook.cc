//
// Created by jorda on 10/2/2015.
//

#include "Rook.h"

Rook::Rook(bool isBlack) : Piece::Piece(isBlack) {
    Rook::isBlack = isBlack;
}

char Rook::getSymbol() {
    return isBlack ? 'R' : 'r';
}