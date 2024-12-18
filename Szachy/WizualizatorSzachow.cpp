#include "stdafx.h"

void WizualizatorSzachow::Aktualizuj(Plansza* plansza)
{
	Szachownica* szachownica = (Szachownica*)plansza;
	cout << "  abcdefgh  " << endl;
	for (int i = 8; --i >= 0; )
		cout << i + 1 << ' ' << szachownica->Rzad(i) << ' ' << i + 1 << endl;
	cout << "  abcdefgh  " << endl;
}
