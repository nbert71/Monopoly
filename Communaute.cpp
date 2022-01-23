//
// Created by Arthur on 29/12/2021.
//

#include "Communaute.h"
#include "Joueur.h"
#include<random>
#include<chrono>

Communaute::~Communaute(){

}

void Communaute::arreterSur(Joueur* j){
    unsigned seed { static_cast<unsigned> (std::chrono::system_clock::now().time_since_epoch().count()) };
    std::default_random_engine prng(seed);
    std::uniform_int_distribution<int> dist(1, 100);
    int v = dist(prng);

    if(v >= 50){
        cout << "Tu t'es mal garé tu paies une amende de 50$" << endl;
        j->debiter(50);
    }else {
        cout << "Tu gagnes 100$ au loto !" << endl;
        j->crediter(100);
    }
}
