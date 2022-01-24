//
// Created by nicob on 29/12/2021.
//

#include "Gare.h"

Gare::Gare(string nom,int prixAchat):
Propriete(nom,50,prixAchat){ // il faudra calculer le loyer mais par d�faut c'est 50

}

Gare::~Gare(){

}

void Gare::arreterSur(Joueur* j){
	if (this->proprietaire == NULL){
		if (j->getSolde() > prixAchat){
			cout << "La gare coûte " << prixAchat << "$."<< endl;
			string resultat;
			bool reply = false;
			do {
				cout << "Voulez-vous acheter cette gare ? (tapez y ou n) " << endl;
				cin >> resultat;
				if (resultat == "y\n") {
					reply = true;
				}
				if (resultat == "n\n") {
					reply = true;
				}
			}
			while (reply);
			if (resultat == "y") {
				j -> debiter(prixAchat);
				proprietaire = j;
				cout << "Votre nouveau solde est de " << j -> getSolde() << "$." << endl;

			}else {
				//TODO Enchères;
			};
		}else {
			cout << "Solde insuffisant, vous ne pouvez pas acheter cette gare !" << endl;
		};
	}else {
		cout << "Vous payez votre loyer de " << loyer << "$ à " << proprietaire -> getNom() << " !" << endl;
		j -> debiter(loyer);
		proprietaire -> crediter(loyer);
		cout << "Votre nouveau solde est de " << j -> getSolde() << " $." << endl;
	};
}
