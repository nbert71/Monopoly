//
// Created by nicob on 16/01/2022.
//

#ifndef MONOPOLY_DE_H
#define MONOPOLY_DE_H


#include <chrono>
#include <random>

class Jeu;
class De {
private:
    Jeu* jeu;
    int nbFaces{};
    int valeur{};



public:
    De(int n);
    ~De();
    int getNbFaces() const;
    void setNbFaces(int nbFaces);

    int getValeur();

    const Jeu &getJeu() const;
    void setJeu(Jeu *jeu);
    void roll();
};


#endif //MONOPOLY_DE_H
