//
// Created by jorda on 9/30/2015.
//

#include <string>
#include <iostream>
#include "Chess.h"

Chess::Chess() {
    board = new Board(6, 6);
}

void Chess::setup() {
    for (int i = 1; i <= 4; i+=3) {
        for (int j = 0; j < 6; ++j) {
            if (i == 1) {
                board->getSquare(i, j)->setPiece(new Pawn(false));
            } else if (i == 4) {
                board->getSquare(i, j)->setPiece(new Pawn(true));
            }
        }
    }
}

Square* Chess::getSquare(std::istream &istream) {
    std::string line;
    istream >> line;
    return board->getSquare(line[0], line[2]);
}

bool Chess::isOver() {
    return false;
}

Chess::~Chess() {
    delete board;
}