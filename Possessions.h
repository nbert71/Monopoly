/*
 * Possessions.h
 *
 *  Created on: 22 janv. 2022
 *      Author: gloue
 */

#ifndef POSSESSIONS_H_
#define POSSESSIONS_H_


class Propriete;
class Possessions {
private :
	Propriete * possession;
	Possessions * suivante;
public:
	Possessions();
	Possessions(Propriete* p);
	virtual ~Possessions();
	Propriete* getPossession(){return possession;}
	void addPossession(Propriete* p);
	Possessions* removePossession(Propriete* p);
	void affichePossessions();
	int getNbPossessions();
};

#endif /* POSSESSIONS_H_ */
