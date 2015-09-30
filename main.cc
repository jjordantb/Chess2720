#include <iostream>
#include "ca/cpsc/chess/internal/impl/Chess.h"

using namespace std;

int main() {
    Chess* chessGame = new Chess();
    chessGame->play();
    return 0;
}