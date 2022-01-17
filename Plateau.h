//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_PLATEAU_H
#define MONOPOLY_PLATEAU_H



#include "Case.h"

class Plateau {
private:
    Case* cases;

public:
    Plateau();
    ~Plateau();

    void creerCases();
    void lierCases(Case* c);

    void affichePlateau();
};


#endif //MONOPOLY_PLATEAU_H
