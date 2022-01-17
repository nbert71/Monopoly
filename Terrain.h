//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_TERRAIN_H
#define MONOPOLY_TERRAIN_H


#include "Propriete.h"

class Terrain : public Propriete {
private:
    string couleur;

public:
    const string &getCouleur() const;
    void setCouleur(const string &couleur);
//    void arreterSur();
};


#endif //MONOPOLY_TERRAIN_H
