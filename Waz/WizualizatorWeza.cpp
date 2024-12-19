#include "stdafx.h"

void WizualizatorWeza::Aktualizuj(Plansza* plansza)
{
	system("cls");
	PlanszaWeza* pl = (PlanszaWeza*)plansza;
	int ileX = pl->Szerokosc(), ileY = pl->Wysokosc();
	cout << string(ileX + 2, '#') << endl;
	for (int i = 0; i < ileY; i++)
		cout << '#' << pl->Rzad(i) << '#' << endl;
	cout << string(ileX + 2, '#') << endl;
}
