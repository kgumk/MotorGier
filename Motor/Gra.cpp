#include "pch.h"

void Gra::Gra2Graczy()
{
	int kolej = 0;
	while (!Koniec())
	{
		Gracz* gracz = gracze[kolej];
		Akcja akcja;
		do { akcja = gracz->Decyzja(plansza); } 
		while (!Dozwolona(akcja, gracz));
		plansza.Wykonaj(akcja);
		kolej = kolej ? 0 : 1;
	}
}
