//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_JOUEUR_H
#define MONOPOLY_JOUEUR_H

#include <iostream>



using namespace std;

class Jeu;
class Pion;
class Joueur {

private:
    string nom;
    Pion* pion;
    Jeu* jeu;

protected:
    int solde;

public:
    Joueur(string nom = "", Jeu* jeu = NULL,Pion* pion= NULL, int solde = 1500);

    void operation();
    const string &getNom() const;
    const Pion &getPion() const;
    int getSolde() const;
    const Jeu &getJeu() const{return *this->jeu;}

    void setNom(const string &nom);
    void setPion(Pion* pion);
    void setSolde(int solde);
    void setJeu(Jeu* jeu){this->jeu = jeu;}

    void jouer();
    void crediter(const int montant);
    void debiter(const int montant);


    void afficheSolde();
};


#endif //MONOPOLY_JOUEUR_H
