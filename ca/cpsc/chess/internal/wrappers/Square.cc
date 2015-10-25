/*
 * Square.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 */

#include "Square.h"
#include <stdlib.h>

Square::Square() {
    piece = NULL;
}

void Square::setPiece(Piece* p) {
    /**
     * If a piece exists on this square, kill it
     */
    if (piece != NULL){
        piece->kill();
    }
    piece = p;
}

Piece* Square::removePiece() {
    Piece* p = piece;
    piece = NULL;
    return p;
}

const char Square::symbol() const {
    if (piece != NULL)
        return piece->symbol;
    else
        return EMPTY;
}

Piece* Square::getPiece() const {
    return piece;
}

int Square::getX() {
    return x;
}

int Square::getY() {
    return y;
}

void Square::setX(int x) {
    Square::x = x;
}

void Square::setY(int y) {
    Square::y = y;
}

