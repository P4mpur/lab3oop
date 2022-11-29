#pragma once
#include "KvadratnaFunkcija.h"
#include <math.h>
#include "Funkcija.h"
class EksponencijalnaFja : public Funkcija
{
public:
	EksponencijalnaFja() : Funkcija() { k = 2; };
	EksponencijalnaFja(int ka, int en, int iks) : Funkcija(ka, en) { x = iks; };
	int Fx();
};

inline int EksponencijalnaFja::Fx() {
	return pow(x + n, k);
}

