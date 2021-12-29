//
// Created by nicob on 29/12/2021.
//

#include "Pion.h"

const Joueur &Pion::getJoueur() const {
    return joueur;
}

void Pion::setJoueur(const Joueur &joueur) {
    Pion::joueur = joueur;
}

const Case &Pion::getPosition() const {
    return position;
}

void Pion::setPosition(const Case &position) {
    Pion::position = position;
}

const string &Pion::getNom() const {
    return nom;
}

void Pion::setNom(const string &nom) {
    Pion::nom = nom;
}

void Pion::deplacer(int n) {

}
