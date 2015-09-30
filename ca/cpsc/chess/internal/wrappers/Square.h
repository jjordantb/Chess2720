//
// Created by jorda on 9/29/2015.
//

#ifndef CHESS2720_SQUARE_H
#define CHESS2720_SQUARE_H


#include "Piece.h"

class Square {

private:
    int x, y;
    char symbol = '.';
    Piece* piece;

public:
    Square(int row, int column);

    const char getSymbol();
    void setPiece(Piece* piece);
    Piece* getPiece();

    int getX();
    int getY();

    Piece* removePiece();

};


#endif //CHESS2720_SQUARE_H
