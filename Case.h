//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_CASE_H
#define MONOPOLY_CASE_H


#include <iostream>
#include <utility>
using namespace std;


class Case { // @suppress("Class has a virtual method and non-virtual destructor")
private:
<<<<<<< HEAD
    Case* suivante;
=======
    string nom;
    //Case* suivante;
>>>>>>> cf670d1547456c0dfa1edcd215b39adc9c88471a

protected:
    string nom;

public:
<<<<<<< HEAD
    Case();
    Case(string nom);

    virtual ~Case();

    virtual void arreterSur();

=======
    explicit Case(string s);

    //void arreterSur();
>>>>>>> cf670d1547456c0dfa1edcd215b39adc9c88471a
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
