#include "stdafx.h"

int main()
{
	SzachistaKon gracz1, gracz2;
	Szachownica plansza;
	WizualizatorSzachow wizualizator;
	Szachy gra(&plansza, &wizualizator, &gracz1, &gracz2);
	gra.GraTurami();
	return 0;
}
