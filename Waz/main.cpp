#include "stdafx.h"

int main()
{
	GraczKon gracz1;
	PlanszaWeza plansza;
	WizualizatorWeza wizualizator;
	Waz gra(&plansza, &wizualizator, &gracz1);
	gra.GraNiezaleznie();
	return 0;
}
