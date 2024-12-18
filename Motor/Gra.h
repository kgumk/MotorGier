#pragma once
#include <vector>
#include <thread>
#include <concurrent_queue.h>

class Gra
{
	Plansza *plansza;
	std::vector<Gracz *> gracze;
	Wizualizator* wizualizator;

public:
	Gra(Plansza *plansza, Wizualizator *wizualizator, 
		Gracz* gracz1, Gracz* gracz2 = 0, Gracz* gracz3 = 0);

	virtual bool Koniec() = 0;
	virtual bool Dozwolona(Akcja *akcja) = 0;

	/* gracze graj¹ po kolei */
private:
	int kolej;

public:
	void GraTurami();

	/* gracze graj¹ niezale¿nie */
private:
	std::vector<std::thread *> watki;
	Concurrency::concurrent_queue<Akcja *> kolejka;
	void StartWatkuGracza(int index);
	void StopWatkuGracza(int index);
public:
	void GraNiezaleznie();
};

