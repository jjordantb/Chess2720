/*
 * Game.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 */

#include "internal/wrappers/Square.h"
#include "Game.h"

/*
 * Main play method
 * Move is validated here.
 */
void Game::play() {
    setup();

    board->draw(std::cout);

    while (!isOver()) {
        std::cout << "Enter location of piece to move {row col}: ";
        Square* p = getSquare(std::cin);
        if (p != NULL) {
            std::cout << "Enter location of destination {row col}: ";
            Square* s = getSquare(std::cin);
            if (s != NULL) {
                Coord* pc = new Coord(p->getX(), p->getY());
                Coord* sc = new Coord(s->getX(), s->getY());
                std::vector<Coord*> coords = p->getPiece()->getMovement()->path(pc, sc);
                bool validMove = true;
                if (coords.size() >= 1) {
                    for (Coord *c : coords) {
                        if (board->getSquare(c->getX(), c->getY())->getPiece() != NULL) {
                            validMove = false;
                        }
                    }
                    if (validMove) {
                        board->movePiece(p, s);
                    } else {
                        std::cout << "Blocked Move" << std::endl;
                    }
                } else {
                    std::cout << "Invalid Move distance" << std::endl;
                }
                delete pc;
                delete sc;
            }
        }
        board->draw(std::cout);
    }
    std::cout << "Game over." << std::endl;
}
