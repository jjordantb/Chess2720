cmake_minimum_required(VERSION 3.3)
project(Chess2720)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cc ca/cpsc/chess/Game.cc ca/cpsc/chess/Game.h ca/cpsc/chess/internal/wrappers/Square.cc ca/cpsc/chess/internal/wrappers/Square.h ca/cpsc/chess/internal/wrappers/Piece.cc ca/cpsc/chess/internal/wrappers/Piece.h ca/cpsc/chess/internal/generic/Board.cc ca/cpsc/chess/internal/generic/Board.h ca/cpsc/chess/internal/impl/Chess.cc ca/cpsc/chess/internal/impl/Chess.h ca/cpsc/chess/internal/wrappers/Coord.cc ca/cpsc/chess/internal/wrappers/Coord.h ca/cpsc/chess/internal/generic/Movement.h ca/cpsc/chess/internal/impl/strats/KingStrategy.cc ca/cpsc/chess/internal/impl/strats/KingStrategy.h ca/cpsc/chess/internal/impl/strats/QueenStrategy.cc ca/cpsc/chess/internal/impl/strats/QueenStrategy.h
        ca/cpsc/chess/internal/impl/strats/BishopStrategy.cc ca/cpsc/chess/internal/impl/strats/BishopStrategy.h ca/cpsc/chess/internal/impl/strats/RookStrategy.cc ca/cpsc/chess/internal/impl/strats/RookStrategy.h ca/cpsc/chess/internal/impl/strats/PawnStrategy.cc ca/cpsc/chess/internal/impl/strats/PawnStrategy.h ca/cpsc/chess/internal/impl/error/Error.h)
add_executable(Chess2720 ${SOURCE_FILES})