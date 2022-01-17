//
// Created by Arthur on 29/12/2021.
//
#include <iostream>
#include "Plateau.h"

Plateau::Plateau(){
	this->cases = NULL;
}

Plateau::~Plateau(){

}

void Plateau::creerCases(){
	if (this->cases == NULL){
		this->cases = new Case();
	}
	else{
		Case* c = this->cases;
		while(c->getSuivante() != NULL){
			c = c->getSuivante();
		}
		c->setSuivante(new Case());
	}
}

void Plateau::lierCases(Case* ca){
	if (this->cases == NULL){
			this->cases = ca;
		}
		else{
			Case* c = this->cases;
			while(c->getSuivante() != NULL){
				c = c->getSuivante();
			}
			c->setSuivante(new Case());
			c->setSuivante(ca);
		}
}

void Plateau::affichePlateau(){
	if (this->cases == NULL){
			cout << "le plateau est vide" << endl;
		}
	else{
		this->cases->affiche();
		cout << " ,";
		Case* c = this->cases->getSuivante();
		while (c != NULL){
			c->affiche();
			cout << " ,";
			c = c->getSuivante();
		}
		cout << endl;
	}
}
