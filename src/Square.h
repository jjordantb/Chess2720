/*
 * Square.h
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 *      Modified by: Jordan Florchinger
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Piece.h"

#define EMPTY '.'

/**
 * A square on the board of the game
 */
class Square {
public:
    Square();
    virtual ~Square() {};
    /**
     * @return the symbol for drawing this square
     */
    const char symbol() const;
    /**
     * Sets the piece contained by the square
     * @param p the piece to be placed on the square
     */
    void setPiece(Piece* p);
    /**
     * @return the piece located on this square and removes it from the board. Returns NULL if the square has no piece
     */
    Piece* removePiece();
    /**
     * @return the piece located on this square, otherwise returns NULL
     */
    Piece* getPiece() const;

    int getX();
    int getY();
    void setX(int x);
    void setY(int y);

private:
    Piece* piece; /*< Piece contained by the square */
    int x, y; /*< x and y coords of square for ease of use*/
};

#endif /* SQUARE_H_ */
