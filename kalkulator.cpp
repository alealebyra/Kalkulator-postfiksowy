#include <iostream>
#include "stos.h"
#include "kalkulator.h"
#include <string>

using namespace std;

void Kalkulator::oblicz(int znak) //'znak' w kodzie ascii
{
    int liczba1, liczba2, wynik;
    liczba1=wsk.top(); //zdejmuje liczbe ze stosu
    wsk.pop();          //usuwam liczbe ze stosu
    liczba2=wsk.top();
    wsk.pop();
    switch(znak) //znak zapisany w kodzie ASCII
    {
        case 43:
            wynik=liczba1+liczba2;
            wsk.push(wynik); //wkladam wynik na gore stosu
            break;

        case 45:
            wynik=liczba1-liczba2;
            wsk.push(wynik);
            break;

        case 42:
            wynik=liczba1*liczba2;
            wsk.push(wynik);
            break;

        default:
        cout<<"Kalkulator nie mogl wykonac dzialania";
    }
    cout<<"Wynik jest rowny:"<<wsk.top()<<endl; //wyswietlam wynik po kazdym wykonaniu dzialania
}

void Kalkulator:: zczytaj()
{
	cout<<"Podaj ciag znakow"<<endl;
	getline(cin, linia);
	int i, zmienna, liczba;
	for(i=0; linia[i]!='\0'; i++)
	{
		zmienna=linia[i]; //zamiana typu zmiennej char na int
		if(zmienna>=48 && zmienna<=57) //48 do 57 to zakres cyfr w kodzie ASCII
		{
		    liczba=zmienna-48; //obliczanie rzeczywistej wartosci liczby z kodu ASCII
		    wsk.push(liczba);   //wrzucanie zczytanej liczby na stos
		}
		else if(zmienna==42 || zmienna==43 || zmienna==45) oblicz(zmienna); //jesli napotka na znak wykonuje dzialanie
	}
}

