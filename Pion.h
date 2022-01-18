//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_PION_H
#define MONOPOLY_PION_H



#include "Case.h"


using namespace std;

class Joueur;
class Pion {
private:
    Joueur* joueur;
    Case* position;
    string nom; // charactère du pion sur le plateau
public:
    Pion(string nom="");

    Joueur* getJoueur();
    void setJoueur(Joueur& joueur);

    Case* getPosition();
    void setPosition( Case* position);

    const string &getNom() const;
    void setNom(const string &nom);

    void deplacer(int n);

    void affiche(){
		cout << this->nom;
    }

    friend ostream& operator<< (ostream& stream, Pion p){
    	p.affiche();
    	return stream;
    }
};


#endif //MONOPOLY_PION_H
