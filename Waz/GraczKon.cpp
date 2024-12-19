#include "stdafx.h"

Akcja* GraczKon::Decyzja(Plansza* plansza)
{
	Kierunek* ruch = new Kierunek();
	int z = -1, poprz;
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
	delete ruch;
	return 0;
}
