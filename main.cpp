#include <iostream>
#include "Jeu.h"

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

    return 0;
}
