#include <iostream>
#include "Chess.h"

using namespace std;

int main() {
    Chess* chessGame = new Chess();
    chessGame->play();
    delete chessGame;
    return 0;
}