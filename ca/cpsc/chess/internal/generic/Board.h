//
// Created by jorda on 9/29/2015.
//

#ifndef CHESS2720_BOARD_H
#define CHESS2720_BOARD_H


#include <iosfwd>
#include "../wrappers/Piece.h"
#include "../wrappers/Square.h"

class Board {

private:
    int *width, *height;
    Square* squares[6][6];

public:
    Board(const int width, const int height);
    ~Board();

    const void draw(std::ostream *ostream);
    const void placePiece(Piece* piece, Square* square);
    const void movePiece(Square* square1, Square* square2);
    Square* getSquare(const int row, const int column);

};


#endif //CHESS2720_BOARD_H
