//
// Created by Jordan Florchinger on 10/25/2015.
//

#include "BishopStrategy.h"

std::vector<Coord*> BishopStrategy::path(Coord *start, Coord *end) {
    std::vector<Coord*> cords;
    if (abs(start->getX() - end->getX()) == abs(start->getY() - end->getY())) {
        int distance = abs(start->getX() - end->getX());
        if (start->getX() > end->getX() && start->getY() > end->getY()) { // North West
            for (int i = start->getX() - 1; i > distance; --i) {
                cords.push_back(new Coord(i, i - start->getY() + 1));
            }
        } else if (start->getX() > end->getX() && start->getY() < end->getY()) { // North East
            for (int i = start->getX() - 1; i > distance; --i) {
                cords.push_back(new Coord(i, start->getY() - i + distance + start->getY()));
            }
        } else if (start->getX() < end->getX() && start->getY() < end->getY()) { // South East
            for (int i = start->getX() + 1; i < distance + start->getX() + 1; ++i) {
                cords.push_back(new Coord(i + start->getX(), i + start->getY()));
            }
        } else if (start->getX() < end->getX() && start->getY() > end->getY()) { // South West
            for (int i = start->getX() + 1; i < distance + 1; ++i) {
                cords.push_back(new Coord(i, start->getY() - i));
            }
        }
    }
}