//
// Created by nicob on 16/01/2022.
//

#include "De.h"
#include <experimental/random>

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
    this->valeur = std::experimental::randint(1, this->nbFaces);
}
