#pragma once
class PlanszaWeza :
    public Plansza
{
    vector<string> zawartosc;
    queue<Pozycja> waz;

    void RuchWeza(Kierunek* kierunek);

public:
    PlanszaWeza(int szerokosc, int wysokosc);

    std::string Rzad(int i) { return zawartosc[i]; }
    int Szerokosc() { return (int)zawartosc[0].length(); }
    int Wysokosc() { return (int)zawartosc.size(); }

    void Wykonaj(Akcja* akcja);
};

