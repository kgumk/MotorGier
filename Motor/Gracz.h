#pragma once
#include "Akcja.h"
#include "Plansza.h"

class Gracz
{
public:
	virtual Akcja *Decyzja(Plansza *plansza) = 0;
};

