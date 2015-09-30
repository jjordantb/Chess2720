//
// Created by jorda on 9/29/2015.
//

#ifndef CHESS2720_GAME_H
#define CHESS2720_GAME_H

#include <iosfwd>
#include "../wrappers/Square.h"

class Game {

public:
    void play();
    virtual void setup() = 0;
    virtual bool isOver() = 0;
    virtual Square* getSquare(std::istream &istream) = 0;
    bool movePiece(Square* square1, Square* square2);

    virtual ~Game();
};

#endif //CHESS2720_GAME_H
