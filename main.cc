#include <iostream>
#include "ca/cpsc/chess/internal/impl/Chess.h"

using namespace std;

int main() {
    Chess* chessGame = new Chess();
    chessGame->getBoard()->draw(&std::cout);
    delete chessGame;
    return 0;
}