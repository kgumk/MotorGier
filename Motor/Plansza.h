#pragma once

class Akcja;

struct Pozycja
{
	int rzad;
	int kolumna;
};

class Plansza
{
public:
	virtual void Wykonaj(Akcja *akcja) = 0;
};

