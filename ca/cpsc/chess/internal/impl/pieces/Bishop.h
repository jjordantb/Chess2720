//
// Created by jorda on 9/30/2015.
//

#ifndef CHESS2720_BISHOP_H
#define CHESS2720_BISHOP_H


#include "../../wrappers/Piece.h"

class Bishop : public Piece {

public:
    Bishop(bool isBlack);
    char getSymbol();

};


#endif //CHESS2720_BISHOP_H
