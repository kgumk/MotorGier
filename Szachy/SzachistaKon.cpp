#include "stdafx.h"

Akcja* SzachistaKon::Decyzja(Plansza* plansza)
{
	cout << "Tw�j ruch: ";
	Ruch *ruch = new Ruch();
	cin >> ruch;
	return ruch;
}
