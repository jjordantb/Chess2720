//
// Created by jorda on 9/29/2015.
//

#include "Square.h"

Square::Square(int row, int column) {
    x = row;
    y = column;
    piece = new Pawn(false);
}

const char Square::getSymbol() {
    return symbol;
}

Piece* Square::removePiece() {
    Piece* piece1 = piece;
    piece = nullptr;
    symbol = '.';
    return piece1;
}

void Square::setPiece(Piece *piece) {
    Square::piece = piece;
    symbol = piece->getSymbol();
}
