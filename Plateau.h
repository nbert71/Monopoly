//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_PLATEAU_H
#define MONOPOLY_PLATEAU_H



#include "Case.h"
#include<vector>

class Plateau {
private:
    Case casee;

public:
    void creerCases();
    void lierCases(Case c);
};


#endif //MONOPOLY_PLATEAU_H
