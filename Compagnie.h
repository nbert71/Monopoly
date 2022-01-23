//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_COMPAGNIE_H
#define MONOPOLY_COMPAGNIE_H


#include "Propriete.h"

class Compagnie : public Propriete { // @suppress("Class has a virtual method and non-virtual destructor")
public:
	Compagnie(string nom,int prixAchat=0); // il faudra calculer le montant du loyer
	~Compagnie();
	void arreterSur(Joueur* j);
};


#endif //MONOPOLY_COMPAGNIE_H
