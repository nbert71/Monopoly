//
// Created by Arthur on 29/12/2021.
//

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
		Case* c = this->cases->getSuivante();
		while(c != NULL){
			c = c->getSuivante();
		}
		c->setSuivante(new Case());
	}
}

void Plateau::lierCases(Case& ca){
	if (this->cases == NULL){
			this->cases = &ca;
		}
		else{
			Case* c = this->cases->getSuivante();
			while(c != NULL){
				c = c->getSuivante();
			}
			c->setSuivante(&ca);
		}
}
