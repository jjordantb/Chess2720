/*
 * Piece.h
 *
 *  Created on: Sep 3, 2015
 *      Author: anvik
 *      Modified by: Jordan Florchinger
 */

#ifndef PIECE_H_
#define PIECE_H_

#include <vector>
#include "../generic/Movement.h"

/**
 * A piece on the board of the game
 */
class Piece{
public:
    /**
     * Enumeration for colour of piece
     */
    enum colour {black, white};

    /**
     * @param c the colour of the piece
     * @param s the symbol for the piece
     */
    Piece(const colour c, const char s);
    virtual ~Piece();
    /**
     * @return true if the piece is still active on the board, false otherwise.
     */
    bool isAlive() const;
    /**
     * Sets the piece to be inactive on the board
     */
    void kill();

    /**
     * Symbol for the piece
     */
    const char symbol;

    /**
     * Colour of the piece
     */
    const colour player;

    Movement* getMovement();

private:
    bool alive; /*!< Indicates if the piece is still active in the game */
    Movement* movement;


};

#endif /* PIECE_H_ */
