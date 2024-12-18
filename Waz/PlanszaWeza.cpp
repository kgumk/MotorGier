#include "stdafx.h"

PlanszaWeza::PlanszaWeza(int szerokosc, int wysokosc)
	:szerokosc(szerokosc), wysokosc(wysokosc)
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
	Kierunek* ruch = (Kierunek*)akcja;

}

