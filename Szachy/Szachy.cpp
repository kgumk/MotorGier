#include "stdafx.h"

Szachy::Szachy(Szachownica* plansza, WizualizatorSzachow* wizualizator,
	SzachistaKon* gracz1, SzachistaKon* gracz2)
	: Gra(plansza, wizualizator, gracz1, gracz2)
{
}

bool Szachy::Koniec()
{
	// TODO
	return false;
}

bool Szachy::Dozwolona(Akcja* akcja)
{
	Ruch* ruch = (Ruch*)akcja;
	if (ruch->pocz.rzad < 0 || ruch->pocz.rzad > 7
		|| ruch->pocz.kolumna < 0 || ruch->pocz.kolumna > 7
		|| ruch->kon.rzad < 0 || ruch->kon.rzad > 7
		|| ruch->kon.kolumna < 0 || ruch->kon.kolumna > 7)
		return false;
	// TODO: dodatkowe sprawdzanie
	// ...

	return true;
}
