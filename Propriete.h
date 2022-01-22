//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_PROPRIETE_H
#define MONOPOLY_PROPRIETE_H


#include "Case.h"
#include "Joueur.h"


class Propriete : public Case { // @suppress("Class has a virtual method and non-virtual destructor")
protected:
	int loyer;
    int prixAchat;
    Joueur* proprietaire;

public:
    Propriete(string nom, int loyer,int prixAchat);
    virtual ~Propriete();

    Joueur* getProprietaire(){return proprietaire;}
    void setProprietaire(Joueur* j){proprietaire = j;}

    int getLoyer() const;
    void setLoyer(int loyer);

    int getPrixAchat() const;
    void setPrixAchat(int prixAchat);

    void arreterSur();

    void affiche(){
		cout << this->nom << " " << prixAchat << "$" ;
	}
};


#endif //MONOPOLY_PROPRIETE_H
