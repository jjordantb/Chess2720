/*
 * Game.h
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 */

#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include "internal/generic/Board.h"

/**
 * A board game
 */
class Game {
public:
    /**
     * Play the game. The game proceeds as follows:
     * - setup the game
     * - as long as the game isn't over
     *    - get the location of the piece to move
     *    - get the destination for the piece
     *    - move the piece to the new location
     *    - draw the board
     */
    void play();
    virtual ~Game(){};
    /**
     * Sets up the board for playing the game
     */
    virtual void setup() const = 0;
    /**
     * @return true if the game has ended, false otherwise
     */
    virtual bool isOver() const = 0;
    /**
     * Reads an input stream to get the coordinates on a board
     * @return a square from the board
     */
    virtual Square* getSquare(std::istream &is) const = 0;

protected:
    /**
     * The game board
     */
    const Board* board;
};

#endif /* GAME_H_ */
