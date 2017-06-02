#include <iostream>
#include "stos.h"
#include "kalkulator.h"
#include <string>

using namespace std;

int main()
{
    Kalkulator kalkulator;
    char koniec; // znak, ktory odczytuje, czy skonczyc dzialanie programu
    while(1)
    {
        cout << "Kalkulator postfiksowy."<<endl;
        cout << "Jesli chcesz zakonczyc program wcisnij q"<<endl;
        cout << "Jesli chcesz wprowadzic wyrazenie wcisnij k"<<endl;
		cin >> koniec;
		cin.clear(); //czyszczenie bufora
		cin.sync(); //dla linuxa std::cin.ignore( 1000, '\n' );
		if(koniec=='q') break;
		else if(koniec=='k')
		{
		    kalkulator.zczytaj();
		}
        else cout<<"Nie podales zadnej z powyzszych liter. Sprobuj jeszcze raz"<<endl;
    }
}
