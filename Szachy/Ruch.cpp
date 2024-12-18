#include "stdafx.h"

::Pozycja Ruch::Pozycja(string napis)
{
	::Pozycja p;
	p.kolumna = napis[0] - 'a';
	p.rzad = napis[1] - '1';
	if (p.rzad < 0 || p.rzad > 7 || p.kolumna < 0 || p.kolumna > 7)
		throw NiepoprawnaPozycja();
	return p;
}

istream& operator>>(istream& is, Ruch& ruch)
{
	string s1, s2;
	is >> s1 >> s2;
	ruch.pocz = ruch.Pozycja(s1);
	ruch.kon = ruch.Pozycja(s2);
	return is;
}
