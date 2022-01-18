//
// Created by Arthur on 29/12/2021.
//
#include<random>
#include<chrono>
#include "Communaute.h"

Communaute::~Communaute(){

}

void Communaute::arreterSur(Joueur* j){
    unsigned seed { static_cast<unsigned> (std::chrono::system_clock::now().time_since_epoch().count()) };
    std::default_random_engine prng(seed);
    std::uniform_int_distribution<int> dist(1, 100);
    int v = dist(prng);

    if(v >= 50){
        cout << "shheee gare toi mieux, donnes 100$" << endl;
        j->debiter(100);
    }else {
        cout << "tu gagnes 100$ au loto" << endl;
        j->crediter(100);
    }
}
