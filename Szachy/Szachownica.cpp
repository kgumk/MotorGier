#include "stdafx.h"

void Szachownica::Wykonaj(Akcja* akcja)
{
	Ruch* ruch = (Ruch*)akcja;
	rzedy[ruch->kon.rzad][ruch->kon.kolumna] = rzedy[ruch->pocz.rzad][ruch->pocz.kolumna];
	rzedy[ruch->pocz.rzad][ruch->pocz.kolumna] = ' ';
}

Szachownica::Szachownica()
{
	rzedy.push_back("wsghkgsw");
	rzedy.push_back("pppppppp");
	for (size_t i = 0; i < 4; i++)
		rzedy.push_back(string(8, ' '));
	rzedy.push_back("PPPPPPPP");
	rzedy.push_back("WSGHKGSW");
}
