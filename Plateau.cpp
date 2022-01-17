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

void Plateau::creerCases(){
	Case* c = this->cases;
	while(c->getSuivante() != NULL){
		c = c->getSuivante();
	}
	c->setSuivante(new Case());
}

void Plateau::lierCases(Case* ca){
	Case* c = this->cases;
	while(c->getSuivante() != NULL){
		c = c->getSuivante();
	}
	c->setSuivante(new Case());
	c->setSuivante(ca);
}

void Plateau::affichePlateau(){
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
