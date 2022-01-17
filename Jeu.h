//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_JEU_H
#define MONOPOLY_JEU_H


#include "Plateau.h"

class De;
class Jeu {

private:
    int tourdejeu;
    Plateau plateau;

public:
    Jeu();
    int getTourdejeu() const;
    void setTourdejeu(int tourdejeu);

    const Plateau &getPlateau() const;
    void setPlateau(const Plateau &plateau);

    void addDe(De d);

};


#endif //MONOPOLY_JEU_H
