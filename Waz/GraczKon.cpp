#include "stdafx.h"

Akcja* GraczKon::Decyzja(Plansza* plansza)
{
	Kierunek* ruch = new Kierunek();
	char z, poprz;
	while (_kbhit())
		z = _getch();

	while (true) {
		poprz = z;
		z = _getch();
		if ((poprz == PRZEDZNAK1 || poprz == PRZEDZNAK2)
			&& (z == WLEWO || z == WGORE || z == WPRAWO || z == WDOL))
		{
			ruch->kierunek = z;
			return ruch;
		}
	}
	return 0;
}
