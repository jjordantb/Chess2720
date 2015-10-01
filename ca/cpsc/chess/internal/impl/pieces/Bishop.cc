//
// Created by jorda on 9/30/2015.
//

#include "Bishop.h"

Bishop::Bishop(bool isBlack) : Piece::Piece(isBlack){
    Bishop::isBlack = isBlack;
}

char Bishop::getSymbol() {
    return isBlack ? 'B' : 'b';
}
