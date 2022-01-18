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
	Joueur a = Joueur("A");
	Pion aa = Pion("X");
	aa.setJoueur(a);
	a.setPion(aa);
	Joueur b = Joueur("B");
	Pion bb = Pion("+");
	bb.setJoueur(b);
	b.setPion(bb);

	Joueur list [2];
	list[0] = a;
	list[1] = b;

	Jeu je = Jeu(2);
    je.loadMonopolyPlateau();
    list[0].getPion()->setPosition(je.getPlateau().getCases());
    list[1].getPion()->setPosition(je.getPlateau().getCases());
    je.setJoueurs(list);
    je.afficheMonopoly();
    cout<<endl;
    list[0].getPion()->deplacer(2);
    je.afficheMonopoly();

    return 0;
}
