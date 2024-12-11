// Szachy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "stdafx.h"

int main()
{
	SzachistaKon gracz1, gracz2;
	Szachownica plansza;
	Szachy gra(&plansza, &gracz1, &gracz2);
	gra.GraTurami();
	return 0;
}
