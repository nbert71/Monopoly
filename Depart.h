//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_DEPART_H
#define MONOPOLY_DEPART_H

#include "Case.h"

#include <iostream>
using namespace std;

class Depart : public Case{ // @suppress("Class has a virtual method and non-virtual destructor")
public:
	Depart():Case("Depart"){};
	~Depart();
    void arreterSur();
};


#endif //MONOPOLY_DEPART_H
