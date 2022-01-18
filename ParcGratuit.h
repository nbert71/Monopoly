/*
 * ParcGratuit.h
 *
 *  Created on: 18 janv. 2022
 *      Author: gloue
 */

#ifndef PARCGRATUIT_H_
#define PARCGRATUIT_H_

#include "Case.h"

class ParcGratuit: public Case {
public:
	ParcGratuit(string nom = "Parc Gratuit"):Case(nom){};
	virtual ~ParcGratuit();
};

#endif /* PARCGRATUIT_H_ */
