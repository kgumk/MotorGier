// Szachy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <Motor.h>

int main()
{
	Szachista gracz1, gracz2;
	Szachownica plansza;
	Szachy gra(plansza, &gracz1, &gracz2);
	gra.Gra2Graczy();
	return 0;
}
