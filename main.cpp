#include <iostream>
#include "Jeu.h"
#include "De.h"

#include "Compagnie.h"

int main()
{
	Compagnie c ("yo");
    std::cout<< c.getNom() <<std::endl;
    return 0;
}
