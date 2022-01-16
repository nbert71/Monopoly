//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_CASE_H
#define MONOPOLY_CASE_H


#include <iostream>
#include <utility>
using namespace std;


class Case {
private:
    string nom;
    //Case* suivante;

public:
    explicit Case(string s);

    //void arreterSur();
    string getNom(){
        return this->nom;
    }
    void setNom(string n){
        this->nom = std::move(n);
    }
//    Case getSuivante(){
//        return *(this->suivante);
//    }
//    void setSuivante(Case suiv){
//        this->suivante = &suiv;
//    }
};


#endif //MONOPOLY_CASE_H
