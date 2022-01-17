//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_PLATEAU_H
#define MONOPOLY_PLATEAU_H



#include "Case.h"
#include<vector>

class Plateau {
private:
<<<<<<< HEAD
    Case casee;

public:
    void creerCases();
    void lierCases();
=======
    std::vector<Case> cases;

public:
    Plateau();
    const vector<Case> &getCases() const;
    void addCase(const Case& c);
    void displayCases();
>>>>>>> cf670d1547456c0dfa1edcd215b39adc9c88471a
};


#endif //MONOPOLY_PLATEAU_H
