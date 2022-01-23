//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_CHANCE_H
#define MONOPOLY_CHANCE_H

#include "Case.h"

#include <iostream>
using namespace std;

class Chance : public Case{ // @suppress("Class has a virtual method and non-virtual destructor")
public:
	Chance():Case("Chance"){};
	~Chance();
    void arreterSur(Joueur* j);
};


#endif //MONOPOLY_CHANCE_H
