//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_COMPAGNIE_H
#define MONOPOLY_COMPAGNIE_H


#include "Propriete.h"

class Compagnie : public Propriete { // @suppress("Class has a virtual method and non-virtual destructor")
public:
	Compagnie(string nom,int loyer=0,int prixAchat=0);
	~Compagnie();
	void arreterSur();
};


#endif //MONOPOLY_COMPAGNIE_H
