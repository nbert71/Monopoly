//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_PRISON_H
#define MONOPOLY_PRISON_H

#include "Case.h"

#include <iostream>
using namespace std;


class Prison : public Case{ // @suppress("Class has a virtual method and non-virtual destructor")
public:
	Prison():Case("Prison"){};
	~Prison();
    void arreterSur(Joueur* j);
};


#endif //MONOPOLY_PRISON_H
