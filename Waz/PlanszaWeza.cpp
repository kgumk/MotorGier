#include "stdafx.h"

PlanszaWeza::PlanszaWeza(int szerokosc, int wysokosc)
{
	for (size_t i = 0; i < wysokosc; i++)
		zawartosc.push_back(string(szerokosc, ' '));
	zawartosc[wysokosc / 2][szerokosc / 2] = '@';
	Pozycja poz;
	poz.rzad = wysokosc / 2;
	poz.kolumna = szerokosc / 2;
	waz.push(poz);
}

void PlanszaWeza::Wykonaj(Akcja* akcja)
{
	if (strcmp(typeid(akcja).name(), "Kierunek"))
	{
		Kierunek* kierunek = reinterpret_cast<Kierunek*>(akcja);
		RuchWeza(kierunek);
		return;
	}
}

void PlanszaWeza::RuchWeza(Kierunek* kierunek)
{
	Pozycja nowa = waz.back(); // g³owa wê¿a
	switch (kierunek->kierunek)
	{
	case WLEWO: nowa.kolumna--; break;
	case WGORE: nowa.rzad--; break;
	case WPRAWO: nowa.kolumna++; break;
	case WDOL: nowa.rzad++; break;
	default: break;
	}
	waz.push(nowa); // nowa g³owa
	zawartosc[nowa.rzad][nowa.kolumna] = '@';
	Pozycja ogon = waz.front(); // koniec (ogon) wê¿a
	zawartosc[ogon.rzad][ogon.kolumna] = ' ';
	waz.pop();
}
