//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_GARE_H
#define MONOPOLY_GARE_H


#include "Propriete.h"

class Gare : public Propriete{
public:
	Gare(string nom="",int prixAchat=200);
	~Gare();
	void arreterSur(); // loyer à calculer
};


#endif //MONOPOLY_GARE_H
