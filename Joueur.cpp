//
// Created by nicob on 29/12/2021.
//


#include "Joueur.h"
#include "Jeu.h"

Joueur::Joueur(string nom, Jeu* jeu, Pion* p, int solde){
	this->nom = nom;
	this->pion = p;
	this->solde = solde;
	this->jeu = jeu;
}

const string &Joueur::getNom() const {
    return nom;
}

Pion* Joueur::getPion() {
    return pion;
}

int Joueur::getSolde() const {
    return solde;
}

void Joueur::setNom(const string &nom) {
    Joueur::nom = nom;
}

void Joueur::setPion(Pion& pion) {
	Joueur::pion = &pion;
}

void Joueur::setSolde(int solde) {
    Joueur::solde = solde;
}

void Joueur::jouer() {

}

void Joueur::crediter(const int montant) {
    this->solde += montant;
}

void Joueur::debiter(const int montant) {
    this->solde -= montant;
}

void Joueur::operation() {

}

void Joueur::afficheSolde(){
	cout <<this->nom <<" a "<< this->solde << " $" << endl;
}
