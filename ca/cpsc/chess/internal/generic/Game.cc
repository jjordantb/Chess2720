//
// Created by jorda on 9/29/2015.
//

#include <iostream>
#include "Game.h"
#include <string>

void Game::play() {
    setup();
    board->draw(&std::cout);
    while(!isOver()) {
        std::string line;
        std::cout << "Enter Co-ordinates of Piece to move 'X,Y': ";
        std::cin >> line;
        Square* location = board->getSquare(line[0], line[2]);
        std::cout << "Enter Co-ordinates of place to move to 'X,Y': ";
        std::cin >> line;
        Square* destination = board->getSquare(line[0], line[2]);
        movePiece(location, destination);
        board->draw(&std::cout);
    }
}



bool Game::movePiece(Square *square1, Square *square2) {
    board->movePiece(square1, square2);
    return true;
}

Game::~Game() {
    delete board;
}