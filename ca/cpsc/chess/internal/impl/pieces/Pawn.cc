//
// Created by jorda on 9/30/2015.
//

#include "Pawn.h"

Pawn::Pawn(bool isBlack) : Piece::Piece(isBlack) {
    Pawn::isBlack = isBlack;
}

char Pawn::getSymbol() {
    return isBlack ? 'P' : 'p';
}