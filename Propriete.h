//
// Created by nicob on 29/12/2021.
//

#ifndef MONOPOLY_PROPRIETE_H
#define MONOPOLY_PROPRIETE_H


#include "Case.h"

class Propriete : public Case { // @suppress("Class has a virtual method and non-virtual destructor")
private:
    int loyer;
protected:
    int prixAchat;

public:
    Propriete(string nom, int loyer,int prixAchat);
    virtual ~Propriete();


    int getLoyer() const;
    void setLoyer(int loyer);

    int getPrixAchat() const;
    void setPrixAchat(int prixAchat);

    void arreterSur();

    void affiche(){
		cout << this->nom << " " << prixAchat << "$" ;
	}
};


#endif //MONOPOLY_PROPRIETE_H
