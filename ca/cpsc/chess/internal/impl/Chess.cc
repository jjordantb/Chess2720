//
// Created by jorda on 9/30/2015.
//

#include <string>
#include <iostream>
#include "Chess.h"
#include "pieces/Bishop.h"

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
}

Square* Chess::getSquare(std::istream &istream) {
    std::string line;
    istream >> line;
    return board->getSquare(line[2], line[0]);
}

bool Chess::isOver() {
    return false;
}

Chess::~Chess() {
    delete board;
}