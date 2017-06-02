#ifndef KALKULATOR_H
#define KALKULATOR_H
#include <iostream>
#include <string>
#include "stos.h"

using namespace std;

class Kalkulator
{
    private:
    Stos wsk;
    string linia;

    public:
        void oblicz(int znak);
        void zczytaj();
};
#endif
