#include "pch.h"

Gra::Gra(Plansza *plansza, Wizualizator* wizualizator,
	Gracz* gracz1, Gracz* gracz2, Gracz* gracz3)
	: plansza(plansza), wizualizator(wizualizator), kolej(0)
{
	if (gracz1)
		gracze.push_back(gracz1);
	if (gracz2)
		gracze.push_back(gracz2);
	if (gracz3)
		gracze.push_back(gracz3);
}

void Gra::GraTurami()
{
	kolej = 0;
	if (wizualizator)
		wizualizator->Aktualizuj(plansza);
	while (!Koniec())
	{
		Gracz *gracz = gracze[kolej];
		Akcja *akcja;
		do { akcja = gracz->Decyzja(plansza); } 
		while (!Dozwolona(akcja));
		plansza->Wykonaj(akcja);
		if (wizualizator)
			wizualizator->Aktualizuj(plansza);
		kolej++;
		if (kolej == gracze.size())
			kolej = 0;
	}
}

void DecyzjeGracza(Gracz *gracz, Plansza *plansza, 
	Concurrency::concurrent_queue<Akcja*> *kolejka)
{
	Akcja* akcja;
	while (true) 
		akcja = gracz->Decyzja(plansza); 
	kolejka->push(akcja);
}

void Gra::StartWatkuGracza(int index)
{
	std::thread *t = new std::thread(DecyzjeGracza, gracze[index], plansza, &kolejka);
	watki.push_back(t);
}

void Gra::StopWatkuGracza(int index)
{
	// czekamy na zakoñczenie
	delete watki[index];
}

void Gra::GraNiezaleznie()
{
	for (int i = 0; i < gracze.size(); i++)
		StartWatkuGracza(i);

	if (wizualizator)
		wizualizator->Aktualizuj(plansza);

	while (!Koniec())
	{
		Akcja* akcja;
		while (!kolejka.try_pop(akcja)); // uwaga! aktywne czekanie
		if (Dozwolona(akcja))
		{
			plansza->Wykonaj(akcja);
			if (wizualizator)
				wizualizator->Aktualizuj(plansza);
		}
	}

	for (int i = 0; i < gracze.size(); i++)
		StopWatkuGracza(i);
}

