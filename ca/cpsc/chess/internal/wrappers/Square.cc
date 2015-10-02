
#include "Square.h"
#include "../impl/pieces/NullPiece.h"

Square::Square(int row, int column) {
    x = row;
    y = column;
    piece = new NullPiece();
}

char Square::getSymbol() {
    return piece->getSymbol();
}

bool Square::removePiece() {
    delete piece;
    piece = new NullPiece();
    return piece != nullptr;
}

//TODO: Segmentation Faults
Piece* Square::getPiece() {
    return piece;
}

void Square::setPiece(Piece *piece) {
    Square::piece = piece;
}

Square::~Square() {
    delete piece;
}
