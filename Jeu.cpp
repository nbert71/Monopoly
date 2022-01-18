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
    this->gobelet = new Gobelet(6);
    this->joueurs = new Joueur[nbJoueurs];
    this->plateau = Plateau();

}

void Jeu::init(){
	// on load le plateau
	loadMonopolyPlateau();
	cout << "Saisissez le nombre de joueurs : ";
	cin >> nbJoueurs;
	this->joueurs = new Joueur[nbJoueurs];
	for (int i=0; i < nbJoueurs; i++){ // faire en sorte d'avoir au moins 2 joueurs
		string nom;
		string symbole;
		cout << "Saisissez le nom du joueur : ";
		cin >> nom;
		cout << "Saisissez le symbole du pion (+,x,=,%,~,@,µ) : "; // TODO faire en sorte qu'on puisse avoir que ça et pas deux fois
		cin >> symbole;

		Pion aa = Pion(symbole);
		Joueur a = Joueur(nom,aa);

		aa.setPosition(plateau.getCases()); // on set la position initiale à la première case du plateau aka le Depart
		aa.setJoueur(a);
		a.setPion(aa);

		joueurs[i] = a;
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


void Jeu::loadMonopolyPlateau(){
	// depart déjà setup
	plateau.lierCases(new Terrain("Boulevard de Belleville","",60,60));
	plateau.lierCases(new Communaute());
	plateau.lierCases(new Terrain("Rue Lecourbe","",60,60));
	plateau.lierCases(new Impot("Impot sur le Revenu",200));
	plateau.lierCases(new Gare("\033[04mGare Montparnasse\033[0m"));
	plateau.lierCases(new Terrain("Rue de Vaugirard","\033[36m", 100, 100));
	plateau.lierCases(new Chance());
	plateau.lierCases(new Terrain("Rue de Courcelles","\033[36m",100,100));
	plateau.lierCases(new Terrain("Avenue de la Republique","\033[36m",120,120));

	plateau.lierCases(new Prison());
	plateau.lierCases(new Terrain("Boulevard de la vilette", "\033[35m", 140,140));
	plateau.lierCases(new Compagnie("Compagnie de distribution d'electricite",150));
	plateau.lierCases(new Terrain("Avenue de Neuilly","\033[35m", 140, 140));
	plateau.lierCases(new Terrain("Rue du Paradis","\033[35m",160,160));
	plateau.lierCases(new Gare("\033[04mGare de Lyon\033[0m"));
	plateau.lierCases(new Terrain("Avenue Mozart","",180,180));
	plateau.lierCases(new Communaute());
	plateau.lierCases(new Terrain("Boulevard Saint-Michel","",180,180));
	plateau.lierCases(new Terrain("Place Pigalle","",200,200));

	plateau.lierCases(new ParcGratuit());
	plateau.lierCases(new Terrain("Avenue Matignon","\033[31m",220,220));
	plateau.lierCases(new Chance());
	plateau.lierCases(new Terrain("Boulevard Malesherbes","\033[31m",220,220));
	plateau.lierCases(new Terrain("Avenue Henri-Martin","\033[31m",240,240));
	plateau.lierCases(new Gare("\033[04mGare du Nord\033[0m"));
	plateau.lierCases(new Terrain("Faubourg Saint-Honore","\033[33m",260,260));
	plateau.lierCases(new Terrain("Place de la Bourse","\033[33m", 260,260));
	plateau.lierCases(new Compagnie("Compagnie de distribution des eaux",150));
	plateau.lierCases(new Terrain("Rue de la Fayette","\033[33m",280,280));

	plateau.lierCases(new AllezEnPrison());
	plateau.lierCases(new Terrain("Avenue de Breteuil","\033[32m",300,300));
	plateau.lierCases(new Terrain("Avenue Foch","\033[32m",300,300));
	plateau.lierCases(new Communaute());
	plateau.lierCases(new Terrain("Boulevard des Capucines","\033[32m", 320, 320));
	plateau.lierCases(new Gare("\033[04mGare de Saint-Lazare\033[0m"));
	plateau.lierCases(new Chance());
	plateau.lierCases(new Terrain("Avenue des Champs-Elysees","\033[34m",350,350));
	plateau.lierCases(new Impot("Taxe de Luxe", 100));
	plateau.lierCases(new Terrain("Rue de la paix","\033[34m",400,400));

	// on boucle le plateau :
	plateau.lierCases(plateau.getCases());


}

