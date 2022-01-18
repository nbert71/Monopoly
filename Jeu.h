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
    Gobelet* gobelet;
    Joueur* joueurs;

public:
    Jeu(int nbJoueurs = 4);

    int getTourdejeu() const;
    void setTourdejeu(int tourdejeu);

    Plateau &getPlateau(){return plateau;}
    void setPlateau(const Plateau &plateau);

    void init();

    Gobelet getGobelet(){
    	return *this->gobelet;
    }
    void setGobelet(Gobelet& gobelet){
    	this->gobelet = &gobelet;
    }

    Joueur* getJoueurs(){return this->joueurs;}
    void setJoueurs(Joueur* joueurs){this->joueurs = joueurs;}


    void loadMonopolyPlateau();

    void afficheMonopoly(){
    	plateau.affichePlateauMonopoly(joueurs,nbJoueurs);
    }
};


#endif //MONOPOLY_JEU_H
