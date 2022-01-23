//
// Created by Arthur on 29/12/2021.
//

#include "Chance.h"
#include "Joueur.h"
#include<chrono>
#include<random>

Chance::~Chance(){

}

void Chance::arreterSur(Joueur* j){
    unsigned seed { static_cast<unsigned> (std::chrono::system_clock::now().time_since_epoch().count()) };
    std::default_random_engine prng(seed);
    std::uniform_int_distribution<int> dist(1, 3);
    int v = dist(prng);

    if(v == 1){
        cout << "Pascal Denis vous demande de payer vos frais de scolarité, payer 150$" << endl;
        j->debiter(150);
    }else if(v==2) {
        cout << "Vous validez la chimie ! Recevez 200$" << endl;
        j->crediter(200);
    }else if(v==3) {
        cout << "Vous êtes pris en flagrant délit de triche pendant les partiels ! Aller en prison !" << endl;
        j->getPion().goToPrison();
    }
}
