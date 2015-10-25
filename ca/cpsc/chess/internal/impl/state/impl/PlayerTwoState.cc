//
// Created by jorda on 10/25/2015.
//

#include "PlayerTwoState.h"

const bool PlayerTwoState::accept(const char c) {
    return isupper(c);
}

const char PlayerTwoState::getID() {
    return '2';
}