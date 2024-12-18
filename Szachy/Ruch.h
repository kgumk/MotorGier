#pragma once

#include <Akcja.h>

class Ruch : public Akcja
{
public:
	::Pozycja pocz, kon;

	::Pozycja Pozycja(string napis);

	class NiepoprawnaPozycja {};
};

istream& operator>>(istream& is, Ruch& ruch);
