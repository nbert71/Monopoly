//
// Created by nicob on 29/12/2021.
//


#include "Joueur.h"
#include "Jeu.h"
#include "Propriete.h"


Joueur::Joueur(){
}

Joueur::Joueur(string nom, Pion p, Jeu* jeu, int solde){
	this->nom = nom;
	this->pion = p;
	this->solde = solde;
	this->jeu = jeu;
	this->prison = false;
	this->p = Possessions();
	// TODO attribut tour pour savoir si c'est notre tour
}

const string &Joueur::getNom() const {
    return nom;
}

Pion Joueur::getPion() {
    return pion;
}

int Joueur::getSolde() const {
    return solde;
}

void Joueur::setNom(const string &nom) {
    Joueur::nom = nom;
}

void Joueur::setPion(Pion& pion) {
	Joueur::pion = pion;
}

void Joueur::setSolde(int solde) {
    Joueur::solde = solde;
}

void Joueur::jouer(int nbCases) {
	pion.deplacer(nbCases)->arreterSur();
}

void Joueur::crediter(int montant) {
    this->solde += montant;
}

void Joueur::debiter(int montant) {
    this->solde -= montant;
}

void Joueur::operation() {

}

void Joueur::afficheSolde(){
	cout <<this->nom <<" a "<< this->solde << " $" << endl;
}
