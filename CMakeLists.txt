cmake_minimum_required(VERSION 3.20)
project (Monopoly)

set(CMAKE_CXX_STANDARD 14)

add_executable(Monopoly main.cpp Jeu.cpp Jeu.h Joueur.cpp Joueur.h Pion.cpp Pion.h Plateau.cpp Plateau.h Case.cpp Case.h Propriete.cpp Propriete.h Terrain.cpp Terrain.h Gare.cpp Gare.h Compagnie.cpp Compagnie.h De.cpp De.h Communaute.cpp Communaute.h Depart.cpp Depart.h Chance.cpp Chance.h Prison.cpp Prison.h Gobelet.h Gobelet.cpp AllezEnPrison.cpp AllezEnPrison.h ParcGratuit.cpp ParcGratuit.h Impot.cpp Impot.h Possessions.cpp Possessions.h)