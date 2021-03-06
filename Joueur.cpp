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
	this->prison = 0;
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

int Joueur::getPrison() {
    cout << prison << endl;
    if ( prison == 0 || prison > 3 ){ // si joueur en prison depuis 3 tours
        this->setPrison(0);
    }
    else {
        this->setPrison(prison+1);
        cout << "Souhaitez-vous sortir pour 50$ ?" << endl;
        string input;
        cin >> input;
        if (input == "y"){
            this->debiter(50);
            this->setPrison(0);
            cout << "Vous sortez de prison et votre solde est de : " << this->solde << endl;
        }
    }
    return prison;
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
	pion.deplacer(nbCases)->arreterSur(this);
}

void Joueur::crediter(int montant) {
    this->solde += montant;
}

void Joueur::debiter(int montant) {
	if (solde - montant >= 0){
		this->solde -= montant;
	}
	else{
		this->solde -= montant;
		// on paye et apr�s on vend jusqu'� �tre positif
		while (solde < 0 && nbPossessions() > 0){
			this->vendPossession();
		}
	}
}

void Joueur::vendPossession(){
	this->crediter(this->p.getPossession()->getPrixAchat());
	this->p.getPossession()->setProprietaire(NULL);
	this->p = *this->p.removePossession(this->p.getPossession());
}

void Joueur::operation() {

}

void Joueur::afficheSolde(){
	cout <<this->nom <<" a "<< this->solde << " $" << endl;
}
