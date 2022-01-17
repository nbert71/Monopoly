//
// Created by Arthur on 29/12/2021.
//

#include "Case.h"



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

}
