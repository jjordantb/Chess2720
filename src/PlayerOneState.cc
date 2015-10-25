//
// Created by jorda on 10/25/2015.
//

#include "PlayerOneState.h"

const bool PlayerOneState::accept(const char c) {
    return islower(c);
}

const char PlayerOneState::getID() {
    return '1';
}