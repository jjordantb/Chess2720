//
// Created by jorda on 9/29/2015.
//

#include <bits/ios_base.h>
#include <ostream>
#include <iostream>
#include "Board.h"

/*
 * Board.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 */

#include <iostream>
#include <assert.h>

Board::Board(const int w, const int h) :
        height { h }, width { w } {
    board = new Square*[height];
    for (int row = 0; row < height; row++)
        board[row] = new Square[width];
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
    assert(p != NULL);
    d->setPiece(p);
    return true;
}

Square* Board::getSquare(int r, int c) const {
    return &board[r][c];
}

