//
// Created by Arthur on 29/12/2021.
//

#include "Plateau.h"




const vector<Case> &Plateau::getCases() const {
    return cases;
}

void Plateau::addCase(const Case& c) {
    this->cases.push_back(c);
}

void Plateau::displayCases() {
    for (int i = 0; i < this->cases.size(); i++) {
        cout << this->cases[i].getNom() << endl;
    }
}

Plateau::Plateau() = default;

