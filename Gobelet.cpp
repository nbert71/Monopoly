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

int Gobelet::getValeur(){
	this->roll();
	this->des->roll();
	return this->getValeur() + this->des->getValeur(); // ici le gobelet est un d� et on a un d� en plus
}

