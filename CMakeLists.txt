cmake_minimum_required(VERSION 3.3)
project(Chess2720)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cc src/Game.cc src/Game.h src/Square.cc src/Square.h src/Piece.cc src/Piece.h src/Board.cc src/Board.h src/Chess.cc src/Chess.h src/Coord.cc src/Coord.h src/Movement.h src/KingStrategy.cc src/KingStrategy.h src/QueenStrategy.cc src/QueenStrategy.h
        src/BishopStrategy.cc src/BishopStrategy.h src/RookStrategy.cc src/RookStrategy.h src/PawnStrategy.cc src/PawnStrategy.h src/Error.h src/State.h src/PlayerOneState.cc src/PlayerOneState.h src/PlayerTwoState.cc src/PlayerTwoState.h)
add_executable(Chess2720 ${SOURCE_FILES})