//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_PROPRIETE_H
#define MONOPOLY_PROPRIETE_H


#include "Case.h"

class Propriete : public Case {
private:
    int loyer;
    int prixAchat;

public:
    int getLoyer() const;
    void setLoyer(int loyer);

    int getPrixAchat() const;
    void setPrixAchat(int prixAchat);

};


#endif //MONOPOLY_PROPRIETE_H
