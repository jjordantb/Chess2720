//
// Created by jorda on 9/29/2015.
//

#include <iostream>
#include "Game.h"

void Game::play() {
    setup();
    board->draw(&std::cout);
    while(!isOver()) {
        std::cout << "Enter Co-ordinates of Piece to move 'X,Y': ";
        Square* location = getSquare(std::cin);
        std::cout << "Enter Co-ordinates of place to move to 'X,Y': ";
        Square* destination = getSquare(std::cin);
        movePiece(location, destination);
        board->draw(&std::cout);
    }
}

bool Game::movePiece(Square *square1, Square *square2) {
    board->placePiece(square1->removePiece(), square2);
    return true;
}

Game::~Game() {
    delete board;
}