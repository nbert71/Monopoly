#include <iostream>
#include "Jeu.h"
#include "De.h"

#include "Compagnie.h"

int main()
{
<<<<<<< HEAD
	Compagnie c ("yo");
    std::cout<< c.getNom() <<std::endl;
=======
    Jeu j;
    int n = j.getTourdejeu();

    Case c("coucou");
    //cout << c.getNom() << endl;
    c.setNom("salut");
    //cout << c.getNom() << endl;

    Plateau p;
    p.addCase(c);

    De d(6);
    d.roll();
    cout << "valeur " << d.getValeur() << endl;
    j.addDe(d);
    cout << "valeur par jeu " << j.getDes()[0].getValeur() << endl;



>>>>>>> cf670d1547456c0dfa1edcd215b39adc9c88471a
    return 0;
}
