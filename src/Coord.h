//
// Created by jorda on 10/24/2015.
//

#ifndef CHESS2720_COORD_H
#define CHESS2720_COORD_H

/*
 * Coordinate wrapper for path generation
 */
class Coord {

private:
    int x, y;

public:
    Coord(const int x, const int y);
    int getX() const;
    int getY() const;

};


#endif //CHESS2720_COORD_H
