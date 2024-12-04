#pragma once
#include "Akcja.h"
#include "Plansza.h"

class Gracz
{
	Plansza& plansza;
public:
	virtual Akcja Decyzja(Plansza& plansza) = 0;
};

