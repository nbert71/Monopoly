/*
 * Impot.cpp
 *
 *  Created on: 18 janv. 2022
 *      Author: gloue
 */

#include "Impot.h"


Impot::~Impot() {
	// TODO Auto-generated destructor stub
}

void Impot::arreterSur(Joueur* j){
    cout << "Vous devez payer les impots, versez " << loyer << "$ à la banque" << endl;
    j->debiter(loyer);
}
