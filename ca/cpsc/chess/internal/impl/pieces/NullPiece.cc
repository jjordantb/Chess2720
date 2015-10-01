//
// Created by jorda on 10/1/2015.
//

#include "NullPiece.h"

NullPiece::NullPiece() : Piece::Piece(true) {

}

char NullPiece::getSymbol() {
    return '.';
}