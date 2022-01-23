//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_PLATEAU_H
#define MONOPOLY_PLATEAU_H



#include "Case.h"
#include "Joueur.h"

class Plateau {
private:

    Case* cases;

public:
    Plateau();
    ~Plateau();

    Case* getCases(){return cases;}

    void lierCases(Case* c);

    void affichePlateau();
    void affichePlateauMonopoly(Joueur* j, int size, int qui);
};


#endif //MONOPOLY_PLATEAU_H
