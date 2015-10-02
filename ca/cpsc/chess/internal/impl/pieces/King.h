//
// Created by jorda on 10/2/2015.
//

#ifndef CHESS2720_KING_H
#define CHESS2720_KING_H


#include "../../wrappers/Piece.h"

class King : public Piece {
    King(bool isBlack);
    char getSymbol();
};


#endif //CHESS2720_KING_H
