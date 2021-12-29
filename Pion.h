//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_PION_H
#define MONOPOLY_PION_H


#include "Joueur.h"
#include "Case.h"

class Pion {
private:
    Joueur joueur;
    Case position;
    string nom;
public:
    const Joueur &getJoueur() const;
    void setJoueur(const Joueur &joueur);

    const Case &getPosition() const;
    void setPosition(const Case &position);

    const string &getNom() const;
    void setNom(const string &nom);

    void deplacer(int n);
};


#endif //MONOPOLY_PION_H
