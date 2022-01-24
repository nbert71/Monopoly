//
// Created by nicob on 29/12/2021.
//

#include "Compagnie.h"
#include "Gobelet.h"

Compagnie::Compagnie(string nom,int prixAchat):
Propriete(nom,0,prixAchat){ // il faudra calculer le loyer en fonciton du lancer

}

Compagnie::~Compagnie(){

}

void Compagnie::arreterSur(Joueur* j){ // loyer � calculer en fonction des d�s jet�s
	if (this->proprietaire == NULL){
			if (j->getSolde() > prixAchat){
				cout << "La compagnie coûte " << prixAchat << "$."<< endl;
				string resultat;
				bool reply = false;
				do {
					cout << "Voulez-vous acheter cette compagnie ? (tapez y ou n) " << endl;
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
				}
			}else {
				cout << "Solde insuffisant, vous ne pouvez pas acheter cette gare !" << endl;
			}
		}else { // Il faut lancer les dés et multiplier le résultat par 4 pour connaître le loyer à payer !
			cout << "Vous lancez les dés pour connaître le montant du loyer à payer." << endl;
			Gobelet  lancer = Gobelet(6);
			cout << "Vous avez obtenu " ;
			int valeur = lancer.getValeurG();
			cout << " soit au total " << valeur  << " !" << endl;
			int nouveauLoyer = valeur * 4;
			cout << "Vous payez votre loyer de " << nouveauLoyer << "$ à " << proprietaire -> getNom() << " ." << endl;
			j -> debiter(nouveauLoyer);
			proprietaire -> crediter(nouveauLoyer);
			cout << "Votre nouveau solde est de " << j -> getSolde() << "$." << endl;
		}
	}
