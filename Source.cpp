#include <iostream>
#include "Haunter.h"
#include "Gaurdian.h"
using namespace std;
int main() {

	Haunter H1;
	string name;
	int Nom, n, Lvl;
	cin >> name;
	cin >> Nom >> Lvl;
	H1.Setname(name);
	for (int i = 0; i < Nom; i++) {
		cin >> n;
		H1.SetWeapons(Nom, n, i);

	}
	H1.SetLvl(Lvl);
	cout << " Lvl Is : " << H1.GetLvl() << endl << " Name Is : " << H1.Getname() << endl;
	for (int i = 0; i < Nom; i++) {

		cout << " | " << H1.Weapon[i] << " | ";

	}
	return 0;

}