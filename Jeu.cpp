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
	for (int i=0; i < nbJoueurs; i++){ // TODO faire en sorte d'avoir au moins 2 joueurs
		string nom;
		string symbole;
		cout << "Saisissez le nom du joueur : ";
		cin >> nom;
		cout << "Saisissez le symbole du pion (+,x,=,%,~,@,µ) : "; // TODO faire en sorte qu'on puisse avoir que ça et pas deux fois
		cin >> symbole;

		Pion aa = Pion(symbole);
		Joueur a = Joueur(nom,aa);

		joueurs[i] = a;

		aa.setPosition(plateau.getCases()); // on set la position initiale à la première case du plateau aka le Depart
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


void Jeu::loadMonopolyPlateau(){
	// depart déjà setup
	plateau.lierCases(new Terrain("Boulevard de Belleville","marron",60,60));
	plateau.lierCases(new Communaute());
	plateau.lierCases(new Terrain("Rue Lecourbe","marron",60,60));
	plateau.lierCases(new Impot("Impot sur le Revenu",200));
	plateau.lierCases(new Gare("Gare Montparnasse"));
	plateau.lierCases(new Terrain("Rue de vaugirard","ciel", 100, 100));
	plateau.lierCases(new Chance());
	plateau.lierCases(new Terrain("Rue de Courcelles","ciel",100,100));
	plateau.lierCases(new Terrain("Avenue de la république","ciel",120,120));

	plateau.lierCases(new Prison());
	plateau.lierCases(new Terrain("Boulevard de la viliette", "mauve", 140,140));
	plateau.lierCases(new Compagnie("compagnie de distribution d'electricité",150));
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
	plateau.lierCases(new Terrain("Faubourg Saint-Honoré","jaune",260,260));
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

