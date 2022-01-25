//
// Created by nicob on 29/12/2021.
//

#include "Jeu.h"
#include "De.h"
#include "Terrain.h"
#include "Gare.h"
#include "Compagnie.h"
#include "Prison.h"
#include "Chance.h"
#include "Communaute.h"
#include "Impot.h"
#include "ParcGratuit.h"
#include "AllezEnPrison.h"

#include "Gobelet.h"
#include <iostream>
using namespace std;

Jeu::Jeu(int nbJoueurs) {
    this->tourdejeu = 1;
    this->nbJoueurs = nbJoueurs;
    this->gobelet = Gobelet(6);
    this->joueurs = new Joueur[nbJoueurs];
    this->plateau = Plateau();
    this->nJoueur = 0 ; // TODO random joueur

}

void Jeu::init(int n,string nom_, string c){
	// on load le plateau
	loadMonopolyPlateau();
	if (n == 0){
		cout << "Saisissez le nombre de joueurs : ";
		cin >> nbJoueurs;
	}else{
		nbJoueurs = n;
	}
	this->joueurs = new Joueur[nbJoueurs];
	for (int i=0; i < nbJoueurs; i++){ // TODO faire en sorte d'avoir au moins 2 joueurs
		string nom;
		string symbole;
		if(nom_ == ""){
			cout << "Saisissez le nom du joueur : ";
			cin >> nom;
		}else{
			nom = nom_;
		}
		if(c == ""){
			cout << "Saisissez le symbole du pion (+,x,=,%,~,@,�) : "; // TODO faire en sorte qu'on puisse avoir que �a et pas deux fois
			cin >> symbole;
		}else{
			symbole = c;
		}

		Pion aa = Pion(symbole);
		Joueur a = Joueur(nom,aa);

		joueurs[i] = a;

		aa.setPosition(plateau.getCases()); // on set la position initiale � la premi�re case du plateau aka le Depart
		aa.setJoueur(joueurs[i]);
		joueurs[i].setPion(aa);


	}
}

int Jeu::getTourdejeu() const {
    //cout << "Tour de jeu : " << this->tourdejeu << endl;
    return tourdejeu;
}

void Jeu::setTourdejeu(int t) {
    Jeu::tourdejeu = t;
}

void Jeu::setPlateau(const Plateau &p) {
    Jeu::plateau = p;
}

void Jeu::tour(){
	bool doublet = true;
	int nbDoublets = 0;
	while (doublet == true && nbDoublets < 3) {
        try {
            system("pause"); // permet d'attendre une entr�e pour lancer les d�s, mais ne marche que sous windows
        }
        catch (...) { // catch toutes les erreurs
            cerr << "Vous n'etes pas sous windows, les des se lancent tout seuls !";
        }

        if (joueurs[nJoueur].getPrison()) { // vérifie si le joueur est en prison et reduit la peine d'un tour
            cout << joueurs[nJoueur] << endl;
            cout << "Vous etes en prison !" << endl;
        } else {
            doublet = false;
            cout << joueurs[nJoueur] << endl;
            cout << "Vous avez lance les des et vous avez eu ";
            int valeur = gobelet.getValeurG();
            cout << " soit un total de " << valeur << endl;

            if (getGobelet().Double()) {
                doublet = true;
                nbDoublets += 1;
            }
            if (nbDoublets == 3) {
                joueurs[nJoueur].getPion().goToPrison();
            } else {
                joueurs[nJoueur].jouer(valeur);
            }
        }
        cout << endl;
        afficheMonopoly();
        if (joueurs[nJoueur].perdu()) {
            cerr << joueurs[nJoueur].getNom() << " a perdu !" << endl;
            removeJoueur(nJoueur);
        }
        cout << endl << endl;
        nJoueur = (nJoueur + 1) % nbJoueurs;
    }
}

void Jeu::removeJoueur(int n){
	for (int i = n; i < nbJoueurs - 1; i++){
		joueurs[i] = joueurs[i+1];
	}
	nbJoueurs -= 1;
}

void Jeu::afficheEnJeu(){
	for (int i = 0; i < nbJoueurs; i++){
		cout << joueurs[i].getNom();
		if (i != nbJoueurs - 1){
			cout << ", ";
		}
	}
	cout << endl;
}

void Jeu::jeux(){
	while(nbJoueurs > 1){
		cout << "Joueurs encore en jeu : ";
		afficheEnJeu();
		tour();
	}
	cout << "Le joueur gagnant est " << joueurs[0].getNom()<< endl;
}

void Jeu::loadMonopolyPlateau(){
	// depart d�j� setup
	plateau.lierCases(new Terrain("Boulevard de Belleville","marron",60,60));
	plateau.lierCases(new Communaute());
	plateau.lierCases(new Terrain("Rue Lecourbe","marron",60,60));
	plateau.lierCases(new Impot("Impot sur le Revenu",200));
	plateau.lierCases(new Gare("Gare Montparnasse"));
	plateau.lierCases(new Terrain("Rue de vaugirard","ciel", 100, 100));
	plateau.lierCases(new Chance());
	plateau.lierCases(new Terrain("Rue de Courcelles","ciel",100,100));
	plateau.lierCases(new Terrain("Avenue de la r�publique","ciel",120,120));

	plateau.lierCases(new Prison());
	plateau.lierCases(new Terrain("Boulevard de la viliette", "mauve", 140,140));
	plateau.lierCases(new Compagnie("compagnie de distribution d'electricit�",150));
	plateau.lierCases(new Terrain("Avenue de Neuilly","mauve", 140, 140));
	plateau.lierCases(new Terrain("Rue de Paradis","mauve",160,160));
	plateau.lierCases(new Gare("Gare de Lyon"));
	plateau.lierCases(new Terrain("Avenue Mozart","orange",180,180));
	plateau.lierCases(new Communaute());
	plateau.lierCases(new Terrain("Boulevard Saint-Michel","orange",180,180));
	plateau.lierCases(new Terrain("Place Pigalle","orange",200,200));

	plateau.lierCases(new ParcGratuit());
	plateau.lierCases(new Terrain("Avenue Matignon","rouge",220,220));
	plateau.lierCases(new Chance());
	plateau.lierCases(new Terrain("Boulevard Malesherbes","rouge",220,220));
	plateau.lierCases(new Terrain("Avenue Henri-Martin","rouge",240,240));
	plateau.lierCases(new Gare("Gare du Nord"));
	plateau.lierCases(new Terrain("Faubourg Saint-Honor�","jaune",260,260));
	plateau.lierCases(new Terrain("Place de la bourse","jaune", 260,260));
	plateau.lierCases(new Compagnie("Compagnie de distribution des eaux",150));
	plateau.lierCases(new Terrain("Rue de la Fayette","jaune",280,280));

	plateau.lierCases(new AllezEnPrison());
	plateau.lierCases(new Terrain("Avenue de Breteuil","vert",300,300));
	plateau.lierCases(new Terrain("Avenue Foch","vert",300,300));
	plateau.lierCases(new Communaute());
	plateau.lierCases(new Terrain("Boulevard des Capucines","vert", 320, 320));
	plateau.lierCases(new Gare("Gare de Saint-Lazare"));
	plateau.lierCases(new Chance());
	plateau.lierCases(new Terrain("Avenue des Champs-Elyees","bleu",350,350));
	plateau.lierCases(new Impot("Taxe de Luxe", 100));
	plateau.lierCases(new Terrain("Rue de la paix","bleu",400,400));

	// on boucle le plateau :
	plateau.lierCases(plateau.getCases());


}

