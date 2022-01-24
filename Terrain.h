//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_TERRAIN_H
#define MONOPOLY_TERRAIN_H


#include "Propriete.h"

class Terrain : public Propriete {
private:
    string couleur;

public:
    Terrain(string nom="",string couleur="",int loyer = 0, int prixAchat = 0);
    ~Terrain();

    const string &getCouleur() const;
    void setCouleur(const string &couleur);
    void arreterSur(Joueur* j);
    void affiche(){
    	if (proprietaire != NULL){
    	cout << couleur[0] << " " << nom << " " << prixAchat << "$" << " @" << proprietaire->getPion().getNom();
    	}else{
			cout << this->nom << " " << prixAchat << "$" ;
        }
    }
};


#endif //MONOPOLY_TERRAIN_H
