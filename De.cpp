//
// Created by nicob on 16/01/2022.
//

#include "De.h"
#include <experimental/random>
#include <chrono>
#include <random>


De::De(int n) {
    this->setNbFaces(n);
    roll();
}

int De::getNbFaces() const {
    return nbFaces;
}

void De::setNbFaces(int nb) {
    De::nbFaces = nb;
}

int De::getValeur() const {
    return valeur;
}

int De::roll() {
    unsigned seed { static_cast<unsigned> (std::chrono::system_clock::now().time_since_epoch().count()) };
    std::default_random_engine prng(seed);
    std::uniform_int_distribution<int> dist(1, this->nbFaces);
    this->valeur = dist(prng);
}

const Jeu &De::getJeu() const {
    return jeu;
}

void De::setJeu(const Jeu &j) {
    De::jeu = j;
}
