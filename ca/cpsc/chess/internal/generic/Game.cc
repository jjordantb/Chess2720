/*
 * Game.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 */

#include "Game.h"

#include <stdlib.h>

#include <assert.h>

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
                board->movePiece(p, s);
            }
        }
        board->draw(std::cout);
    }
    std::cout << "Game over." << std::endl;
}
