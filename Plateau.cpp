//
// Created by Arthur on 29/12/2021.
//
#include <iostream>
#include "Plateau.h"

#include "Depart.h"

Plateau::Plateau(){
	this->cases = new Depart();
}

Plateau::~Plateau(){

}


void Plateau::lierCases(Case* ca){
	Case* c = this->cases;
	while(c->getSuivante() != NULL){
		c = c->getSuivante();
	}
	c->setSuivante();
	c->setSuivante(ca);
}

void Plateau::affichePlateau(){
	this->cases->affiche();
	cout << " ,";
	Case* c = this->cases->getSuivante();
	bool boucle = false;
	while (c != NULL && boucle == false){
		c->affiche();
		cout << " ,";
		if (c->getNom() == "Depart") boucle = true;
		c = c->getSuivante();
	}
	cout << endl;
}

void Plateau::affichePlateauMonopoly(Joueur* j,int size, int qui){
	cout << "| ";
	cout << cases;
	cout << " ";
	for(int i=0; i < size;i++){
		if (j[i].getPion().getPosition() == cases){
			if (i == qui){
				cout << " [";
				cout << j[i].getPion();
				cout << "] ";
			}else{
				cout << " (";
				cout << j[i].getPion();
				cout << ") ";
			}
		}
	}
	cout << " | ";
	Case* c = cases->getSuivante();
	bool boucle = false;
	int ligne = 1;
	while (c != NULL && boucle == false){
		// on affiche la case
		cout << c;


		// on affiche les joueurs
		cout << " ";
		for(int i=0; i < size;i++){
			if (j[i].getPion().getPosition() == c){
				if (i == qui){
					cout << " [";
					cout << j[i].getPion();
					cout << "] ";
				}else{
					cout << " (";
					cout << j[i].getPion();
					cout << ") ";
				}
			}
		}
		// on set la case suivante
		c = c->getSuivante();

		// on affiche la fin selon le cas
		if (c != NULL) if (c->getNom() == "Depart") boucle = true;
		ligne++;
		if (ligne == 10){
			cout << "||" << endl;
			cout << "--------------------------------------------------------------------------------------------------------------"<< endl << "| ";
			ligne = 0;
		}else if (boucle == true){
			cout << " ||";
		}else{
			cout << " | ";
		}
	}
	cout << endl;
}


