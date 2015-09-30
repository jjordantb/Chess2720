//
// Created by jorda on 9/30/2015.
//

#ifndef CHESS2720_CHESS_H
#define CHESS2720_CHESS_H


#include "../generic/Game.h"
#include "../generic/Board.h"

class Chess : public Game {

private:
    Board* board;

public:
    Chess();
    Board* getBoard();
    void setup();
    bool isOver();
    Square* getSquare(std::istream &istream);

    ~Chess();
};


#endif //CHESS2720_CHESS_H
