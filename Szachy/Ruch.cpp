#include "stdafx.h"

::Pozycja Ruch::Pozycja(string napis)
{
	::Pozycja p;
	p.rzad = napis[0] - 'a';
	p.kolumna = napis[1] - '0';
	if (p.rzad < 0 || p.rzad > 7 || p.kolumna < 0 || p.kolumna > 7)
		throw NiepoprawnaPozycja();
}

istream& operator>>(istream& os, Ruch& ruch)
{
	string s1, s2;
	os >> s1 >> s2;
	ruch.pocz = ruch.Pozycja(s1);
	ruch.kon = ruch.Pozycja(s2);
}
