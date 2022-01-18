//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_JOUEUR_H
#define MONOPOLY_JOUEUR_H

#include <iostream>
#include "Pion.h"


using namespace std;

class Jeu;
class Joueur {

private:
    string nom;
    Pion pion;
    Jeu* jeu;

protected:
    int solde;

public:
    Joueur();
    Joueur(string nom ,Pion pion, Jeu* jeu = NULL, int solde = 1500);

    void operation();
    const string &getNom() const;
    Pion getPion();
    int getSolde() const;
    const Jeu &getJeu() const{return *this->jeu;}

    void setNom(const string &nom);
    void setPion(Pion& pion);
    void setSolde(int solde);
    void setJeu(Jeu* jeu){this->jeu = jeu;}

    void jouer();
    void crediter(const int montant);
    void debiter(const int montant);


    void afficheSolde();

    void affiche(){
    	cout << nom;
    }
    void affichePion(){
    	cout << &pion;
    }
};


#endif //MONOPOLY_JOUEUR_H
