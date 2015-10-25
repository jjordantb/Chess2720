#include <bits/ios_base.h>
#include <ostream>
#include <iostream>
#include "Board.h"
#include "Error.h"
#include "Square.h"

/*
 * Board.cc
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 *      Modified: Jordan Florchinger
 */


Board::Board(const int w, const int h) : height { h }, width { w } {
    board = new Square*[height];
    for (int row = 0; row < height; row++)
        board[row] = new Square[width];

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            (&board[i][j])->setX(i);
            (&board[i][j])->setY(j);
        }
    }
}

Board::~Board() {
    delete[] board;
}

void Board::draw(std::ostream& o) const {

    /**
     * Show the column coordinates
     */
    o << " ";
    for (int j = 0; j < width; j++)
        o << j;

    o << std::endl;

    /**
     * Iterate through the rows drawing the symbol for each column
     */
    for (int i = 0; i < height; i++) {
        o << i; // Show the row coordinate
        for (int j = 0; j < width; j++) {
            Square s = board[i][j];
            o << s.symbol();
        }
        o << std::endl;
    }
}

void Board::placePiece(Piece* p, Square* s) const {
    s->setPiece(p);
}

bool Board::movePiece(Square* s, Square* d) const {
    Piece* p = s->removePiece();
    if (p == NULL) {
        throw invalid_piece_error("Invalid Piece");
    }
    d->setPiece(p);
    return true;
}

Square* Board::getSquare(int r, int c) const {
    if (r > width || r < 0 || c > height || c < 0) {
        throw invalid_coordinates_error("Incorect Co-ordinates");
    }
    return &board[r][c];
}

