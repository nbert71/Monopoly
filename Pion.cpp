//
// Created by nicob on 29/12/2021.
//

#include "Pion.h"
#include "Joueur.h"

Pion::Pion(string nom){
	this->nom = nom;
	this->position = NULL;
	this->joueur = NULL;
}

Joueur* Pion::getJoueur(){
    return joueur;
}

void Pion::setJoueur(Joueur& joueur) {
    Pion::joueur = &joueur;
}

Case* Pion::getPosition() {
    return position;
}

void Pion::setPosition( Case* position) {
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
