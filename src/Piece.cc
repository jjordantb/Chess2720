/*
 * Piece.cc
 *
 *  Created on: Sep 4, 2015
 *      Author: anvik
 *      Modified by: Jordan Florchinger

 */

#include "Piece.h"
#include "RookStrategy.h"
#include "BishopStrategy.h"
#include "QueenStrategy.h"
#include "KingStrategy.h"
#include "PawnStrategy.h"
#include <cctype>

Piece::Piece(const colour c, const char s) : symbol{s}, player {c}{
    alive = true;
    switch (tolower(s)) {
        case 'k':
            movement = new KingStrategy();
            break;
        case 'q':
            movement = new QueenStrategy();
            break;
        case 'b':
            movement = new BishopStrategy();
            break;
        case 'r':
            movement = new RookStrategy();
            break;
        case 'p':
            movement = new PawnStrategy();
            break;
    }
}

bool Piece::isAlive() const {
    return alive;
}

void Piece::kill() {
    alive = false;
}

Movement* Piece::getMovement() {
    return movement;
}

Piece::~Piece() {
    delete movement;
}
