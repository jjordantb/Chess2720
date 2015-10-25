//
// Created by jorda on 10/25/2015.
//

#ifndef CHESS2720_ERROR_H
#define CHESS2720_ERROR_H

#include <stdexcept>


class invalid_coordinates_error : public std::runtime_error {
public:
    invalid_coordinates_error(const std::string &__arg) : runtime_error("invalid_coordinates_error := " + __arg) { }
};

class invalid_format_error : public std::runtime_error {
public:
    invalid_format_error(const std::string &__arg) : runtime_error("invalid_format_error := " + __arg) { }
};

class invalid_move_error : public std::runtime_error {
public:
    invalid_move_error(const std::string &__arg) : runtime_error("invalid_move_error := " + __arg) { }
};

class invalid_piece_error : public std::runtime_error {
public:
    invalid_piece_error(const std::string &__arg) : runtime_error("invalid_piece_error := " + __arg) { }
};

#endif //CHESS2720_ERROR_H
