/*
 *  Jordan Florchinger
 *  CPSC-2720
 *
 *  Abstraction of main game
 */
#ifndef CHESS2720_GAME_H
#define CHESS2720_GAME_H

#include <iosfwd>
#include "../wrappers/Square.h"
#include "Board.h"

class Game {

protected:
    Board* board;

public:
    void play();
    virtual void setup() = 0;
    virtual bool isOver() = 0;
    bool movePiece(Square* square1, Square* square2);

    virtual ~Game();
};

#endif //CHESS2720_GAME_H
