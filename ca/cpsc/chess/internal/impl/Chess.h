/*
 *  Jordan Florchinger
 *  CPSC-2720
 *
 *  Implements the Game abstraction
 *  Removed getSquare as I was having istream issues
 */
#ifndef CHESS2720_CHESS_H
#define CHESS2720_CHESS_H


#include "../generic/Game.h"
#include "../generic/Board.h"

class Chess : public Game {
    
public:
    Chess();
    void setup();
    bool isOver();

    ~Chess();
};


#endif //CHESS2720_CHESS_H
