#pragma once
#include "Funkcija.h"
#include "math.h"
class KvadratnaFunkcija : public Funkcija
{

public:
	KvadratnaFunkcija() { Funkcija(); };
	KvadratnaFunkcija(int ka, int en, int iks = 0) : Funkcija(ka, en) { x = iks; };
	int Fx() { return pow((x + n), k); };
	
};

