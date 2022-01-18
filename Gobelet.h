/*
 * Gobelet.h
 *
 *  Created on: 17 janv. 2022
 *      Author: gloue
 */

#ifndef GOBELET_H_
#define GOBELET_H_

#include <iostream>

using namespace std;

#include "De.h"

class Gobelet: public De { // ici le gobelet est un d� et on a un d� en plus
private:
	De* des;
	bool doublet;
public:
	Gobelet(int n = 6);
	virtual ~Gobelet();

	int getValeurG();
	bool Double();
};

#endif /* GOBELET_H_ */
