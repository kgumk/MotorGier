#include "stdafx.h"

Akcja* SzachistaKon::Decyzja(Plansza* plansza)
{
	cout << "Twój ruch: ";
	Ruch *ruch = new Ruch();
	cin >> ruch;
	return ruch;
}
