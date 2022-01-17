//
// Created by nicob on 16/01/2022.
//

#include "De.h"
#include "Jeu.h"


De::De(int n) {
    this->nbFaces = n;
    roll();
}

De::~De(){

}

int De::getNbFaces() const {
    return nbFaces;
}

void De::setNbFaces(int nb) {
    De::nbFaces = nb;
}

int De::getValeur() {
    return valeur;
}

const Jeu &De::getJeu() const {
    return *jeu;
}

void De::setJeu(Jeu *j) {
    this->jeu = j;
}

void De::roll() {
	unsigned seed { static_cast<unsigned> (std::chrono::system_clock::now().time_since_epoch().count()) };
	std::default_random_engine prng(seed);
	std::uniform_int_distribution<int> dist(1, this->nbFaces);
	this->valeur = dist(prng);
}
