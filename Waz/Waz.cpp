#include "stdafx.h"

Waz::Waz(PlanszaWeza* plansza, WizualizatorWeza* wizualizator, GraczKon* g)
	: Gra(plansza, wizualizator, g)
{
}

bool Waz::Koniec()
{
	//TODO: ca�a logika
	return false;
}

bool Waz::Dozwolona(Akcja* akcja)
{
	//TODO: ca�a logika
	return true;
}
