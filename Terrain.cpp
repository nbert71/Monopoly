//
// Created by nicob on 29/12/2021.
//

#include "Terrain.h"

Terrain::Terrain(string nom, string couleur, int loyer, int prixAchat):
Propriete(nom,loyer,prixAchat){
	this->couleur = couleur;
}

Terrain::~Terrain(){

}

const string &Terrain::getCouleur() const {
    return couleur;
}

void Terrain::setCouleur(const string &couleur) {
    Terrain::couleur = couleur;
}


void Terrain::arreterSur(Joueur* j) {
	cout << "Votre solde est de " << j->getSolde() << " $" << endl;
	if (this->proprietaire == NULL){
		if (j->getSolde()-prixAchat > 0){
			bool achat;
			string resultat;
			bool reply = false;
			do{
				cout << "Voulez vous acheter ce terrain ? (tappez y ou n)" << endl;
				cin >> resultat;
				if (resultat == "y\n"){
					achat = true;
					reply = true;
				}
				if (resultat == "n\n"){
					achat = false;
					reply = true;
				}
			}
			while (reply);

			if (proprietaire == NULL && achat == true){
				j->debiter(prixAchat);
				proprietaire = j;
			}else if (proprietaire != NULL){
				j->debiter(loyer);
				proprietaire->crediter(loyer);
			}else{
				// TODO enchères
			}
		}else{
			cout << "Vous ne pouvez pas acheter ce Terrain car vous être trop pauvre !!!";
		}
	}else{
		cout << "Vous payez " << loyer << " $ à " << proprietaire->getNom() << endl;
		j->debiter(loyer);
		proprietaire->crediter(loyer);
	}
}


