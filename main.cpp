#include <iostream>
#include "Jeu.h"
#include "De.h"

int main()
{
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



    return 0;
}
