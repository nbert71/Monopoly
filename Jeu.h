//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_JEU_H
#define MONOPOLY_JEU_H


#include "Plateau.h"

#include "Gobelet.h"
#include "Joueur.h"


class De;
class Jeu {

private:
    int tourdejeu;
    int nbJoueurs;
    Plateau plateau;
    Gobelet gobelet;
    Joueur* joueurs;
    int nJoueur;

public:
    Jeu(int nbJoueurs = 4);

    int getTourdejeu() const;
    void setTourdejeu(int tourdejeu);

    Plateau &getPlateau(){return plateau;}
    void setPlateau(const Plateau &plateau);

    void init(int nb=0,string nom = "", string c = "");

    Gobelet getGobelet(){
    	return this->gobelet;
    }
    void setGobelet(Gobelet& gobelet){
    	this->gobelet = gobelet;
    }

    void afficheEnJeu();
    void tour();
    void removeJoueur(int n);
    void jeux();


    Joueur* getJoueurs(){return this->joueurs;}
    void setJoueurs(Joueur* joueurs){this->joueurs = joueurs;}


    void loadMonopolyPlateau();

    void afficheMonopoly(){
    	plateau.affichePlateauMonopoly(joueurs,nbJoueurs,nJoueur);
    }
};


#endif //MONOPOLY_JEU_H
