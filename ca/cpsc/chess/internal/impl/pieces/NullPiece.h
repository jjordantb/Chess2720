//
// Created by jorda on 10/1/2015.
//

#ifndef CHESS2720_NULLPIECE_H
#define CHESS2720_NULLPIECE_H


#include "../../wrappers/Piece.h"

class NullPiece : public Piece {
public:
    NullPiece();
    char getSymbol();
};


#endif //CHESS2720_NULLPIECE_H
