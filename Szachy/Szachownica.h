#pragma once
#include <Plansza.h>

class Szachownica :
    public Plansza
{
    vector<string> rzedy;
public:
    Szachownica();
    void Wykonaj(Akcja* akcja);
    string Rzad(int i) { return rzedy[i]; }
};

