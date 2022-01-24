#include <iostream>
#include "Jeu.h"
#include "De.h"


using namespace std;

#include "Compagnie.h"
#include "Depart.h"
#include "Terrain.h"
#include "Joueur.h"
#include "Possessions.h"
#include "Gare.h"
#include "Joueur.h"

int main()
{
	/*
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
    */



	Jeu j = Jeu();
	j.init();
	//j.init(1,"a","x");
	j.jeux();

	/*
	Gare * g =new Gare("Gare du Nord");
	Terrain* t = new Terrain("test");
	Joueur j = Joueur();
	j.getPossessions().affichePossessions();
	cout << j.nbPossessions() << endl <<endl;
	j.addPossession(g);
	j.getPossessions().affichePossessions();
	cout << j.nbPossessions() << endl<<endl;
	j.addPossession(t);
	j.getPossessions().affichePossessions();
	cout << j.nbPossessions() << endl<<endl;
	j.removePossession(g);
	j.getPossessions().affichePossessions();
	cout << j.nbPossessions() << endl<<endl;
	j.removePossession(t);
	j.getPossessions().affichePossessions();
	cout << j.nbPossessions() << endl<<endl;
	*/

    return 0;
}
