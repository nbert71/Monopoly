//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_COMMUNAUTE_H
#define MONOPOLY_COMMUNAUTE_H

#include "Case.h"
#include"Joueur.h"

#include <iostream>
using namespace std;

class Communaute : public Case { // @suppress("Class has a virtual method and non-virtual destructor")
public:
	Communaute():Case("Caisse de communaute"){};
	~Communaute();
    void arreterSur(Joueur* j);
};


#endif //MONOPOLY_COMMUNAUTE_H
