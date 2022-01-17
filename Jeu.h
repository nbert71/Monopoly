//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_JEU_H
#define MONOPOLY_JEU_H


#include "Plateau.h"
#include "Gobelet.h"

class De;
class Jeu {

private:
    int tourdejeu;
    Plateau plateau;
    Gobelet* gobelet;

public:
    Jeu();
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
};


#endif //MONOPOLY_JEU_H
