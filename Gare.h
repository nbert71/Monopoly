//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_GARE_H
#define MONOPOLY_GARE_H


#include "Propriete.h"

class Gare : public Propriete{
	Gare(string nom="",int loyer=0,int prixAchat=0);
	~Gare();
	void arreterSur();
};


#endif //MONOPOLY_GARE_H
