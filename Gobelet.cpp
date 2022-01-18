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
	this->des->roll();
	return this->getValeur() + this->des->getValeur(); // ici le gobelet est un dé et on a un dé en plus
}

bool Gobelet::Double(){
    return true;
}

