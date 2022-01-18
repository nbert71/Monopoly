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

#include "Case.h"

class Impot: public Case {
private:
	int loyer;
public:
	Impot(string nom = "",int loyer = 0):Case(nom){this->loyer = loyer;}
	virtual ~Impot();

	int getLoyer() const;
	void setLoyer(int loyer);

	void affiche(){
		cout << this->nom << " " << loyer ;
	}
};

#endif /* IMPOT_H_ */
