//
// Created by jorda on 9/29/2015.
//

#ifndef CHESS2720_SQUARE_H
#define CHESS2720_SQUARE_H


#include "Piece.h"
#include "../impl/pieces/Pawn.h"

class Square {

private:
    int x, y;
    char symbol = '.';

protected:
    Piece* piece;

public:
    Square(int row, int column);

    const char getSymbol();
    void setPiece(Piece* piece);
    Piece* removePiece();

};


#endif //CHESS2720_SQUARE_H
