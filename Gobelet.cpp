/*
 * Gobelet.cpp
 *
 *  Created on: 17 janv. 2022
 *      Author: gloue
 */

#include "Gobelet.h"

Gobelet::Gobelet(int n):
De(n) {
	this->des = new De(n);
}

Gobelet::~Gobelet() {

}

int Gobelet::getValeurG(){
	this->roll();
	this->des->roll(7);
	cout << this->getValeur() << " et " << this->des->getValeur();
	this->doublet = bool(this->des->getValeur() == this->getValeur());
	if (this->doublet) cout << " doublet ";
	return this->getValeur() + this->des->getValeur(); // ici le gobelet est un d? et on a un d? en plus
}

bool Gobelet::Double(){
    return this->doublet;
}

