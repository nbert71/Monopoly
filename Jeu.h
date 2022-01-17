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
    Plateau plateau;
    Gobelet* gobelet;
    Joueur* joueurs;

public:
    Jeu(int nbJoueurs = 4);
    int getTourdejeu() const;
    void setTourdejeu(int tourdejeu);

    const Plateau &getPlateau() const;
    void setPlateau(const Plateau &plateau);

    const Gobelet &getGobelet() const{
    	return *this->gobelet;
    }
    void setGobelet(Gobelet& gobelet){
    	this->gobelet = &gobelet;
    }

    const Joueur* getJoueurs(){return this->joueurs;}
    void setJoueurs(Joueur* joueurs){this->joueurs = joueurs;}
};


#endif //MONOPOLY_JEU_H
