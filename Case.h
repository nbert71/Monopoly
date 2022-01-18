//
// Created by Arthur on 29/12/2021.
//

#ifndef MONOPOLY_CASE_H
#define MONOPOLY_CASE_H


#include <iostream>
#include <utility>
using namespace std;


class Case { // @suppress("Class has a virtual method and non-virtual destructor")
private:

    Case* suivante;


protected:
    string nom;

public:

    Case();
    Case(string nom);

    virtual ~Case();

    virtual void arreterSur();



    string getNom(){
        return this->nom;
    }
    void setNom(string n){
        this->nom = std::move(n);

    }

    virtual void affiche(){
    	cout << this->nom ;
    }
    friend ostream& operator<< (ostream& stream,Case* c){
    	c->affiche();
    	return stream;
    }

    Case* getSuivante(){
		return this->suivante;
	}
	void setSuivante(Case* suiv){
		this->suivante = suiv;
	}

};


#endif //MONOPOLY_CASE_H
