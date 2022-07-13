#pragma once
#include <iostream>
using namespace std;
class Gaurdian
{
private:
	static int GaurdiansNom;

protected:
	
	int Lvl = 0;
	string name;

public:
	int WeaponNom;
	int* Weapon = new int[WeaponNom];

	Gaurdian() {
		GaurdiansNom++;
	}
	~Gaurdian() {
		GaurdiansNom--;
	}

	string Getname() {
		return name;
	}
	
	int GetLvl() {
		return Lvl;
	}
	int GetGaurdiansNom() {
		return GaurdiansNom;
	}

};
int Gaurdian::GaurdiansNom = 0;


