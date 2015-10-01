cmake_minimum_required(VERSION 3.3)
project(Chess2720)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cc ca/cpsc/chess/internal/generic/Game.cc ca/cpsc/chess/internal/generic/Game.h ca/cpsc/chess/internal/wrappers/Square.cc ca/cpsc/chess/internal/wrappers/Square.h ca/cpsc/chess/internal/wrappers/Piece.cc ca/cpsc/chess/internal/wrappers/Piece.h ca/cpsc/chess/internal/generic/Board.cc ca/cpsc/chess/internal/generic/Board.h ca/cpsc/chess/internal/impl/Chess.cc ca/cpsc/chess/internal/impl/Chess.h ca/cpsc/chess/internal/impl/pieces/Pawn.cc ca/cpsc/chess/internal/impl/pieces/Pawn.h ca/cpsc/chess/internal/impl/pieces/Bishop.cc ca/cpsc/chess/internal/impl/pieces/Bishop.h ca/cpsc/chess/internal/impl/pieces/NullPiece.cc ca/cpsc/chess/internal/impl/pieces/NullPiece.h)
add_executable(Chess2720 ${SOURCE_FILES})