//
// Created by nicob on 16/01/2022.
//

#include "De.h"



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
	roll();
    return valeur;
}

const Jeu &De::getJeu() const {
    return jeu;
}

void De::setJeu(const Jeu &j) {
    De::jeu = j;
}
