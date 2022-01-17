#include <iostream>
#include "Jeu.h"
#include "De.h"


using namespace std;

#include "Compagnie.h"
#include "Depart.h"
#include "Terrain.h"
#include "Joueur.h"

int main()
{
	Joueur j = Joueur("Bertaux");
	j.afficheSolde();
    Depart d = Depart();
    Plateau p = Plateau();
    p.affichePlateau();
    p.lierCases(new Terrain("Rue de la pie", "rouge", 500, 10));
    p.affichePlateau();

    return 0;
}
