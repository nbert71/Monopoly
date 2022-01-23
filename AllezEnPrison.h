/*
 * AllezEnPrison.h
 *
 *  Created on: 18 janv. 2022
 *      Author: gloue
 */

#ifndef ALLEZENPRISON_H_
#define ALLEZENPRISON_H_

#include "Case.h"
#include "Joueur.h"

class AllezEnPrison: public Case {
public:
	AllezEnPrison(string nom = "Allez En Prison"):Case(nom){};
	virtual ~AllezEnPrison();
	void arreterSur(Joueur* j);
};

#endif /* ALLEZENPRISON_H_ */
