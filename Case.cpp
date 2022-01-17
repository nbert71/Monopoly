//
// Created by Arthur on 29/12/2021.
//

#include "Case.h"

<<<<<<< HEAD
Case::Case(){
	this->nom = "";
	this->suivante = NULL;
}

Case::Case(string nom){
	this->nom = nom;
	this->suivante = NULL;
}

Case::~Case(){

}

void Case::arreterSur(){

=======
#include <utility>

Case::Case(string s) {
    this->nom = std::move(s);
>>>>>>> cf670d1547456c0dfa1edcd215b39adc9c88471a
}
