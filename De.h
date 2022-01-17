//
// Created by nicob on 16/01/2022.
//

#ifndef MONOPOLY_DE_H
#define MONOPOLY_DE_H
#include "Jeu.h"

#include <chrono>
#include <random>

class De {
private:
    Jeu jeu;
    int nbFaces{};
    int valeur{};



public:
    De(int n);
    ~De();
    int getNbFaces() const;
    void setNbFaces(int nbFaces);

    int getValeur();

    const Jeu &getJeu() const;
    void setJeu(const Jeu &jeu);

private:
    void roll() {
		unsigned seed { static_cast<unsigned> (std::chrono::system_clock::now().time_since_epoch().count()) };
		std::default_random_engine prng(seed);
		std::uniform_int_distribution<int> dist(1, this->nbFaces);
		this->valeur = dist(prng);
	}
};


#endif //MONOPOLY_DE_H
