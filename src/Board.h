/*
 * Board.h
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 *      Modified: Jordan Florchinger
 */

#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
#include "Piece.h"
#include "Square.h"

/**
 * The board of the game
 */
class Board {
public:
    /**
     * @param w width of the board
     * @param h height of the board
     */
    Board(const int w, const int h);
    virtual ~Board();
    /**
     * Draw the board to an output stream
     */
    void draw(std::ostream &o) const;
    /**
     * Place a piece on a square
     * @param p the piece to place
     * @param s the square to place the piece on
     */
    void placePiece(Piece* p, Square* s) const;
    /**
     * Move a piece from one square to another square
     * @param s starting square
     * @param d destination square
     */
    bool movePiece(Square* s, Square* d) const;
    /**
     * Get a square on the board at coordinates [r,c]
     * @param r row on the board
     * @param c column on the board
     */
    Square* getSquare(int r, int c) const;

    const int height; /*!< Height of the board */
    const int width; /*!< Width of the board */


private:
    Square** board; /*!< The squares of the board */
};

#endif /* BOARD_H_ */

