//
// Created by jorda on 10/2/2015.
//

#ifndef CHESS2720_QUEEN_H
#define CHESS2720_QUEEN_H


#include "../../wrappers/Piece.h"

class Queen : public Piece {

public:
    Queen(bool isBlack);
    char getSymbol();

};


#endif //CHESS2720_QUEEN_H
