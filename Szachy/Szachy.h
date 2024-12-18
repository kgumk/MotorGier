#pragma once
class Szachy :
    public Gra
{
public :
	Szachy(Szachownica* plansza, WizualizatorSzachow *wizualizator, 
		SzachistaKon* gracz1, SzachistaKon* gracz2);

	bool Koniec();
	bool Dozwolona(Akcja* akcja);
};

