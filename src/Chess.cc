/*
 * Chess.cc
 *
 *  Created on: Sep 4, 2015
 *      Author: anvik
 *      Modified by: Jordan Florchinger
 */

#include <iostream>
#include <limits>
#include "Chess.h"
#include "PlayerOneState.h"
#include "Error.h"

#define SIZE 6

Chess::Chess() {
    board = new Board(SIZE, SIZE);
    state = new PlayerOneState();

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
    if (is >> row >> col) {
        while (is.peek() != '\n') {
            // eats until the end of line
            is.ignore(1);
        }
        is.ignore();
        return board->getSquare(row, col);
    } else {
        is.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw invalid_format_error("Invalid Format!");
    }
    return NULL;
}

const State* Chess::getState() {
    return state;
}

const void Chess::setState(State *state) {
    Chess::state = state;
}

