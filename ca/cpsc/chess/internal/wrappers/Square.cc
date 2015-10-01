//
// Created by jorda on 9/29/2015.
//

#include "Square.h"
#include "../impl/pieces/NullPiece.h"

Square::Square(int row, int column) {
    x = row;
    y = column;
    piece = new NullPiece();
}

char Square::getSymbol() {
    return piece->getSymbol();
}

Piece* Square::removePiece() {
    Piece* piece1 = piece;
    piece = new NullPiece();
    return piece1;
}

void Square::setPiece(Piece *piece) {
    Square::piece = piece;
}
