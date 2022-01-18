/*
 * Impot.h
 *
 *  Created on: 18 janv. 2022
 *      Author: gloue
 */

#ifndef IMPOT_H_
#define IMPOT_H_

#include <iostream>
using namespace std;

#include "Propriete.h"

class Impot: public Propriete {
public:
	Impot(string nom = "",int loyer = 0):Propriete(nom,loyer,0){};// on met 0 parce qu'il n'y a pas de prix d'achat
	virtual ~Impot();
};

#endif /* IMPOT_H_ */
