#pragma once

#include <Akcja.h>

struct Pozycja
{
	int rzad;
	int kolumna;
};

class Ruch : public Akcja
{
public:
	::Pozycja pocz, kon;

	::Pozycja Pozycja(string napis);

	class NiepoprawnaPozycja {};
};

istream& operator>>(istream& os, Ruch& ruch);
