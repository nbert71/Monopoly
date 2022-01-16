//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_PLATEAU_H
#define MONOPOLY_PLATEAU_H



#include "Case.h"
#include<vector>

class Plateau {
private:
    std::vector<Case> cases;

public:
    Plateau();
    const vector<Case> &getCases() const;
    void addCase(const Case& c);
    void displayCases();
};


#endif //MONOPOLY_PLATEAU_H
