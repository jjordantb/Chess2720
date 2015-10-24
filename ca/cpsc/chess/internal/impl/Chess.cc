/*
 * Chess.cpp
 *
 *  Created on: Sep 4, 2015
 *      Author: anvik
 */

#include <iostream>
#include <assert.h>
#include "../generic/Board.h"
#include "Chess.h"

#define SIZE 6

Chess::Chess() {
    board = new Board(SIZE, SIZE);

    // Create King pieces
    bKing = new Piece(Piece::black, 'K');
    wKing = new Piece(Piece::white, 'k');

    // Create Rook pieces
    for (int i = 0; i < 2; i++) {
        bRooks.push_back(new Piece(Piece::black, 'R'));
        wRooks.push_back(new Piece(Piece::white, 'r'));
    }

    // Create Bishop pieces
    for (int i = 0; i < 2; i++) {
        bBishops.push_back(new Piece(Piece::black, 'B'));
        wBishops.push_back(new Piece(Piece::white, 'b'));
    }

    // Create Queen pieces
    bQueen = new Piece(Piece::black, 'Q');
    wQueen = new Piece(Piece::white, 'q');

    // Create Pawn pieces
    for (int i = 0; i < 6; i++) {
        bPawns.push_back(new Piece(Piece::black, 'P'));
        wPawns.push_back(new Piece(Piece::white, 'p'));
    }

}

Chess::~Chess() {
    delete wKing;
    delete bKing;
    delete wQueen;
    delete bQueen;

    for (int i = 0; i < 2; i++) {
        delete bRooks.at(i);
        delete wRooks.at(i);
        delete bBishops.at(i);
        delete wBishops.at(i);
    }

    for (int i = 0; i < 6; i++) {
        delete bPawns.at(i);
        delete wPawns.at(i);
    }

    delete board;
}

void Chess::setup() const {
// Black side
    board->placePiece(bKing, board->getSquare(5, 2));
    board->placePiece(bQueen, board->getSquare(5, 3));
    board->placePiece(bRooks.at(0), board->getSquare(5, 0));
    board->placePiece(bRooks.at(1), board->getSquare(5, 5));
    board->placePiece(bBishops.at(0), board->getSquare(5, 1));
    board->placePiece(bBishops.at(1), board->getSquare(5, 4));
    for (int i = 0; i < 6; i++)
        board->placePiece(bPawns.at(i), board->getSquare(4, i));

    board->placePiece(wKing, board->getSquare(0, 2));
    board->placePiece(wQueen, board->getSquare(0, 3));
    board->placePiece(wRooks.at(0), board->getSquare(0, 0));
    board->placePiece(wRooks.at(1), board->getSquare(0, 5));
    board->placePiece(wBishops.at(0), board->getSquare(0, 1));
    board->placePiece(wBishops.at(1), board->getSquare(0, 4));
    for (int i = 0; i < 6; i++)
        board->placePiece(wPawns.at(i), board->getSquare(1, i));

}

bool Chess::isOver() const {

    /**
     * Game is over if one of the kings is killed
     */
    return (wKing->isAlive() == false || bKing->isAlive() == false);
}

Square* Chess::getSquare(std::istream &is) const {
    int row, col;
    is >> row >> col;
    while (is.peek() != '\n') {
        // eats until the end of line
        is.ignore(1);
    }
    is.ignore();
    assert(0 <= row && row < SIZE);
    assert(0 <= col && col < SIZE);

    return board->getSquare(row, col);
}

