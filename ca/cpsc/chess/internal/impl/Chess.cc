//
// Created by jorda on 9/30/2015.
//

#include <string>
#include <iostream>
#include "Chess.h"
#include "pieces/Bishop.h"
#include "pieces/King.h"
#include "pieces/Queen.h"
#include "pieces/Rook.h"

Chess::Chess() {
    board = new Board(6, 6);
}

void Chess::setup() {
    for (int i = 1; i <= 4; i+=3) {
        for (int j = 0; j < 6; ++j) {
            if (i == 1) {
                board->getSquare(j, i)->setPiece(new Pawn(false));
            } else if (i == 4) {
                board->getSquare(j, i)->setPiece(new Pawn(true));
            }
        }
    }
    for (int i = 1; i <= 4; i+=3) {
        board->getSquare(i, 0)->setPiece(new Bishop(false));
        board->getSquare(i, 5)->setPiece(new Bishop(true));
    }
    for (int i = 0; i <= 5; i+=5) {
        board->getSquare(i, 0)->setPiece(new Rook(false));
        board->getSquare(i, 5)->setPiece(new Rook(true));
    }

    board->getSquare(2, 0)->setPiece(new King(false));
    board->getSquare(2, 5)->setPiece(new King(true));
    board->getSquare(3, 0)->setPiece(new Queen(false));
    board->getSquare(3, 5)->setPiece(new Queen(true));
}

bool Chess::isOver() {
    return false;
}

Chess::~Chess() {
    delete board;
}