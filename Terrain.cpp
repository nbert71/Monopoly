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
	bool achat = true;
	if (proprietaire == NULL && achat == true){
		j->debiter(prixAchat);
		proprietaire = j;
	}else if (proprietaire != NULL){
		j->debiter(loyer);
		proprietaire->crediter(loyer);
	}else{
		// TODO enchères
	}
}


