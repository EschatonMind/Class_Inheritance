#pragma once
#include <iostream>
#include "Gaurdian.h"
using namespace std;
class Haunter: public Gaurdian // Haunter is inherited by the gaurdian (: )
{
private: 

public:
	void SetLvl(int Lvl) {
		this->Lvl = Lvl;
	}

	void Setname(string &name) {
		this->name = name;
	}

	void SetWeapons(int& Nom, int& n, int &i) {
		 
			Weapon[i] = n;
		
	}
	

};

