/*
*  Jordan Florchinger
*  CPSC-2720
*
*  Wrapper for the Square object
*  Issues with Segmentation faults and accessing the Piece object.
*/
#ifndef CHESS2720_SQUARE_H
#define CHESS2720_SQUARE_H


#include "Piece.h"
#include "../impl/pieces/Pawn.h"

class Square {

private:
    int x, y;

protected:
    Piece* piece;

public:
    Square(int row, int column);

    char getSymbol();
    void setPiece(Piece* piece);
    bool removePiece();

    Piece* getPiece();

};


#endif //CHESS2720_SQUARE_H
