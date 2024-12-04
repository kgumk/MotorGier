#pragma once
class Gra
{
	Plansza &plansza;
	Gracz **gracze; 
public:
	Gra(Plansza &plansza, Gracz* gracz1, Gracz* gracz2)
		: plansza(plansza)
	{
		gracze = new Gracz*[2];
		gracze[0] = gracz1;
		gracze[1] = gracz2;
	}
	virtual bool Koniec() = 0;
	virtual bool Dozwolona(Akcja akcja, Gracz* gracz) = 0;

	void Gra2Graczy();
};

