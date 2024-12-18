#pragma once

#define PRZEDZNAK1	224
#define PRZEDZNAK2  0
#define WLEWO	75
#define WGORE	72
#define WPRAWO	77
#define WDOL	80

class GraczKon :
    public Gracz
{
public:
    Akcja* Decyzja(Plansza* plansza);
};

