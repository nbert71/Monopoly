#include <iostream>
#include "Jeu.h"
#include "De.h"

using namespace std;

#include "Compagnie.h"
#include "Depart.h"


int main()
{
	Compagnie c ("yo");
    cout<< c.getNom() <<endl;

    Depart d = Depart();
    Plateau p = Plateau();
    p.affichePlateau();
    p.creerCases();
    p.affichePlateau();
    p.lierCases(&d);
    p.affichePlateau();
    return 0;
}
