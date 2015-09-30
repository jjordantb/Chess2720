//
// Created by jorda on 9/30/2015.
//

#ifndef CHESS2720_PAWN_H
#define CHESS2720_PAWN_H


#include "../../wrappers/Piece.h"

class Pawn : public Piece {

public:
    Pawn(bool isBlack);

    char getSymbol();

};


#endif //CHESS2720_PAWN_H
