#include <iostream>
#include "Funkcija.h"
#include "KvadratnaFunkcija.h"
#include "EksponencijalnaFja.h"

using namespace std;

int main() {
	Funkcija obj1(5,6);
	obj1.staviX(4);
	KvadratnaFunkcija obj2(1,2,3);
	EksponencijalnaFja obj3(5, 6, 7);
	
	cout << "Funkcija : " << endl;
	cout << obj1.Fx() << endl;
	cout << "Kvadratna Funkcija" << endl;
	cout << obj2.Fx() << endl;
	cout << "Eksponencijalna Funkcija" << endl;
	cout << obj3.Fx() << endl;
	
}