#pragma once
#include "Gra.h"

class PlanszaWeza;
class GraczKon;
class WizualizatorWeza;

class Waz :
    public Gra
{
public:
    Waz(PlanszaWeza* plansza, WizualizatorWeza* wizualizator, GraczKon* g);
    bool Koniec();
    bool Dozwolona(Akcja* akcja);
};

