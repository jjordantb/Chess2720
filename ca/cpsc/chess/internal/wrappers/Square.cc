//
// Created by jorda on 9/29/2015.
//

#include "Square.h"

Square::Square(int row, int column) {
    x = row;
    y = column;
}

Piece* Square::getPiece() {
    return piece;
}

const char Square::getSymbol() {
    return symbol;
}

Piece* Square::removePiece() {
    symbol = '.';
    return piece = nullptr;
}

void Square::setPiece(Piece *piece) {
    Square::piece = piece;
    symbol = piece->getSymbol();
}