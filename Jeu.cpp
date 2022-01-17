//
// Created by nicob on 29/12/2021.
//

#include "Jeu.h"
#include "De.h"
#include <iostream>
using namespace std;

Jeu::Jeu() {
    this->tourdejeu = 1;
}

int Jeu::getTourdejeu() const {
    //cout << "Tour de jeu : " << this->tourdejeu << endl;
    return tourdejeu;
}

void Jeu::setTourdejeu(int t) {
    Jeu::tourdejeu = t;
}

const Plateau &Jeu::getPlateau() const {
    return plateau;
}

void Jeu::setPlateau(const Plateau &p) {
    Jeu::plateau = p;
}

void Jeu::addDe(De d) {
    this->des.push_back(d);
}

const vector<De> &Jeu::getDes() const {
    return des;
}
