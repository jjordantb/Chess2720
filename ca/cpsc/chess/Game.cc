/*
 * Game.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anvik
 */

#include "internal/wrappers/Square.h"
#include "Game.h"
#include "internal/impl/error/Error.h"

/*
 * Main play method
 * Move is validated here.
 */
void Game::play() {
    setup();

    board->draw(std::cout);

    while (!isOver()) {
        try {
            std::cout << "Enter location of piece to move {row col}: ";
            Square *p = getSquare(std::cin);
            if (p != NULL) {
                if (p->getPiece() == NULL) {
                    throw invalid_piece_error("No piece on square!");
                }
                std::cout << "Enter location of destination {row col}: ";
                Square *s = getSquare(std::cin);
                if (s != NULL) {
                    Coord *pc = new Coord(p->getX(), p->getY());
                    Coord *sc = new Coord(s->getX(), s->getY());
                    std::vector<Coord *> coords = p->getPiece()->getMovement()->path(pc, sc);
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
                            throw invalid_move_error("Blocked Move");
                        }
                    } else {
                        throw invalid_move_error("Invalid Chess Move");
                    }
                    delete pc;
                    delete sc;
                }
            }
            board->draw(std::cout);
        } catch (invalid_coordinates_error error) {
            std::cout << error.what() << std::endl;
        } catch (invalid_format_error error) {
            std::cout << error.what() << std::endl;
        } catch (invalid_move_error error) {
            std::cout << error.what() << std::endl;
        } catch (invalid_piece_error error) {
            std::cout << error.what() << std::endl;
        }
    }
    std::cout << "Game over." << std::endl;
}
