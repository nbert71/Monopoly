//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_JOUEUR_H
#define MONOPOLY_JOUEUR_H

#include <iostream>
#include "Pion.h"

using namespace std;

class Joueur {

private:
    string nom;
    Pion pion;

protected:
    int solde;

public:
    void operation();
    const string &getNom() const;
    const Pion &getPion() const;
    int getSolde() const;
    void setNom(const string &nom);
    void setPion(const Pion &pion);
    void setSolde(int solde);
    void jouer();
    void crediter(const int montant);
    void debiter(const int montant);


};


#endif //MONOPOLY_JOUEUR_H
