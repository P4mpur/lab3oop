#pragma once
class Funkcija
{
protected:
	int k, n,x;
	//int x; //sad ce vidimo da li ce da mi treba
	char* naziv;
public:
	Funkcija() : k(0),n(0),x(0) {};
	Funkcija(int ka, int en) {k = ka; n = en; };
	virtual int Fx(){
		return k * x + n;
	}
	virtual void staviX(int broj);
	virtual ~Funkcija() {};
	virtual void prikaziFunkciju();
};
inline void Funkcija::staviX(int broj) {
	x = broj;
}
