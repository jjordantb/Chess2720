//
// Created by jorda on 9/29/2015.
//

#include <bits/ios_base.h>
#include <ostream>
#include <iostream>
#include "Board.h"

Board::Board(const int width, const int height) {
    Board::width = new int(width);
    Board::height = new int (height);

    for (int x = 0; x < width; ++x) {
        for (int y = 0; y < height; ++y) {
            Board::squares[x][y] = new Square(x, y);
        }
    }
}

Board::~Board() {
    for (int x = 0; x < 6; ++x) {
        for (int y = 0; y < 6; y++) {
            delete squares[x][y];
        }
    }
    delete width;
    delete height;
}

const void Board::draw(std::ostream *ostream) {
    *ostream << "|   | 0 | 1 | 2 | 3 | 4 | 5 |" << std::endl;
    for (int x = 0; x < *width; ++x) {
        *ostream << "| " << x << " |";
        for (int y = 0; y < *height; ++y) {
            *ostream << " " << squares[x][y]->getSymbol() << " |";
        }
        *ostream << std::endl;
    }
}

const void Board::placePiece(Piece *piece, Square *square) {
    square->setPiece(piece);
}

Square* Board::getSquare(const int row, const int column) {
    return squares[column][row];
}

const void Board::movePiece(Square *square1, Square *square2) {
    placePiece(square1->getPiece(), square2);
}