//
// Created by nicob on 29/12/2021.
//

#include "Jeu.h"

#include <iostream>
using namespace std;

int Jeu::compteur() {
    cout << "Tour de jeu : " << this->tourdejeu << endl;
    return this->tourdejeu;
}
