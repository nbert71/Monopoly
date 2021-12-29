//
// Created by nicob on 29/12/2021.
//

#include "Joueur.h"

const string &Joueur::getNom() const {
    return nom;
}

const Pion &Joueur::getPion() const {
    return pion;
}

int Joueur::getSolde() const {
    return solde;
}

void Joueur::setNom(const string &nom) {
    Joueur::nom = nom;
}

void Joueur::setPion(const Pion &pion) {
    Joueur::pion = pion;
}

void Joueur::setSolde(int solde) {
    Joueur::solde = solde;
}

void Joueur::jouer() {

}

void Joueur::crediter(const int montant) {

}

void Joueur::debiter(const int montant) {

}

void Joueur::operation() {

}
