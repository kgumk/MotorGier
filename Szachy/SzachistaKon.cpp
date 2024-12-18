#include "stdafx.h"

Akcja* SzachistaKon::Decyzja(Plansza* plansza)
{
	cout << "Twoj ruch: ";
	Ruch *ruch = new Ruch();
	cin >> *ruch;
	return ruch;
}
