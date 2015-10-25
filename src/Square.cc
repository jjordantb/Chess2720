/*
 * Square.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 *      Modified by: Jordan Florchinger
 */

#include "Square.h"
#include "Error.h"

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
    if (piece == NULL) {
        throw invalid_piece_error("Piece does not exists!");
    }
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

