//
// Created by nicob on 16/01/2022.
//

#ifndef MONOPOLY_DE_H
#define MONOPOLY_DE_H
#include "Jeu.h"


class De {
private:
    Jeu jeu;
    int nbFaces{};
    int valeur{};

public:
    explicit De(int n);
    int getNbFaces() const;
    void setNbFaces(int nbFaces);

    int getValeur() const;

    const Jeu &getJeu() const;
    void setJeu(const Jeu &jeu);

    int roll();
};


#endif //MONOPOLY_DE_H
