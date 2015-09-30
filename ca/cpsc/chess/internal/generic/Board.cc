//
// Created by jorda on 9/29/2015.
//

#include <bits/ios_base.h>
#include <ostream>
#include "Board.h"

Board::Board(const int width, const int height) {
    Board::width = width;
    Board::height = height;

    for (int x = 0; x < width; ++x) {
        for (int y = 0; y < height; ++y) {
            Board::squares[x][y] = new Square(x, y);
        }
    }
}

Board::~Board() {
    for (int x = 0; x < width; ++x) {
        for (int y = 0; y < height; ++y) {
            delete Board::squares[x][y];
        }
    }
}

const void Board::draw(std::ostream *ostream) {
    *ostream << "|   | 0 | 1 | 2 | 3 | 4 | 5 |" << std::endl;
    for (int x = 0; x < width; ++x) {
        *ostream << "| " << x << " |";
        for (int y = 0; y < height; ++y) {
            *ostream << " " << squares[x][y]->getSymbol() << " |";
        }
        *ostream << std::endl;
    }
}

const void Board::placePiece(Piece *piece, Square *square) {
    square->setPiece(piece);
}

Square* Board::getSquare(const int row, const int column) {
    return squares[row][column];
}

const void Board::movePiece(Square *square1, Square *square2) {

}