//
// Created by jorda on 9/30/2015.
//

#include "Chess.h"

Chess::Chess() {
    board = new Board(6, 6);
}

Board* Chess::getBoard() {
    return board;
}

void Chess::setup() {

}

Square* Chess::getSquare(std::istream &istream) {
    return nullptr;
}

bool Chess::isOver() {
    return false;
}

Chess::~Chess() {

}