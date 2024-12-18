#pragma once
class PlanszaWeza :
    public Plansza
{
    int szerokosc;
    int wysokosc;
    vector<string> zawartosc;
    queue<Pozycja> waz;
public:
    PlanszaWeza(int szerokosc, int wysokosc);
};

