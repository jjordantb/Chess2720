/*
 *  Jordan Florchinger
 *  CPSC-2720
 *
 *  Piece abstraction, implemented by the chess pieces
 */
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
