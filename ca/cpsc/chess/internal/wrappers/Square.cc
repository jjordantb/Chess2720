//
// Created by jorda on 9/29/2015.
//

#include <iostream>
#include "Square.h"

Square::Square(int row, int column) {
    x = row;
    y = column;
}

const char Square::getSymbol() {
    return symbol;
}

Piece* Square::removePiece() {
    Piece* piece1 = piece;
    std::cout << piece1->getSymbol() << std::endl;
    piece = nullptr;
    symbol = '.';
    return piece1;
}

void Square::setPiece(Piece *piece) {
    Square::piece = piece;
    symbol = piece->getSymbol();
}
