//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_CASE_H
#define MONOPOLY_CASE_H

#include "Plateau.h"

#include <iostream>
using namespace std;


class Case {
private:
    string nom;
    Case suivante;

public:
    Case();

    void arreterSur();
    string getNom(){
        return this->nom;
    }
    void setNom(string nom){
        this->nom = nom;
    }
    Case getSuivante(){
        return this->suivante;
    }
    void setSuivante(Case suiv){
        this->suivante = suiv;
    }
};


#endif //MONOPOLY_CASE_H
