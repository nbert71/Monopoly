//
// Created by nicob on 29/12/2021.
//

#include "Propriete.h"


Propriete::Propriete(string nom, int loyer,int prixAchat):
Case(nom){
	this->loyer = loyer;
	this->prixAchat = prixAchat;
	this->proprietaire=NULL;
}

Propriete::~Propriete(){

}

int Propriete::getLoyer() const {
    return loyer;
}

void Propriete::setLoyer(int loyer) {
    Propriete::loyer = loyer;
}

int Propriete::getPrixAchat() const {
    return prixAchat;
}

void Propriete::setPrixAchat(int prixAchat) {
    Propriete::prixAchat = prixAchat;
}

void Propriete::arreterSur(){

}
