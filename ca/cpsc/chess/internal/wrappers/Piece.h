//
// Created by jorda on 9/29/2015.
//

#ifndef CHESS2720_PIECE_H
#define CHESS2720_PIECE_H


class Piece {

private:
    bool alive = true;
protected:
    bool isBlack;

public:
    Piece(bool isBlack);
    const bool isAlive();
    const void kill();
    virtual char getSymbol() = 0;
    ~Piece();
};


#endif //CHESS2720_PIECE_H
