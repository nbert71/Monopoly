cmake_minimum_required(VERSION 3.20)
project (Monopoly)

set(CMAKE_CXX_STANDARD 14)

add_executable(Monopoly main.cpp Jeu.cpp Jeu.h Joueur.cpp Joueur.h Pion.cpp Pion.h Plateau.cpp Plateau.h Case.cpp Case.h)
