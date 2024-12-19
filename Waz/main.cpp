#include "stdafx.h"

int main()
{
	GraczKon gracz1;
	PlanszaWeza plansza(80, 20);
	WizualizatorWeza wizualizator;
	Waz gra(&plansza, &wizualizator, &gracz1);
	gra.GraNiezaleznie();
	return 0;
}
