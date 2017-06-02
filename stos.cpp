#include <iostream>
#include "stos.h"
#include <string>

using namespace std;

Stos::Stos()
{
    tab =NULL;
    rozmiar=0;
}

Stos::Stos(const Stos &t)
{
    rozmiar=t.rozmiar;
    if(rozmiar==0) tab=NULL;
    else if(rozmiar==1)
    {
        tab = new int;
        tab[0]=t.tab[0];
    }
    else
    {
        tab = new int [rozmiar];
        int i;
        for(i=0; i<rozmiar; i++)
            tab[i]=t.tab[i];
    }

}

Stos::~Stos()
{
    if(tab!=NULL)
        delete [] tab;
    rozmiar=0;
}

void Stos::push(int &liczba) //wrzucanie liczby na stos, powiekszanie rozmiaru stosu
{
    int* nowa;
    if(rozmiar==0)
    {
        tab= new int;
        tab[0]=liczba;
    }
    else
    {
        nowa= new int [rozmiar+1];
        int i;
        for(i=0; i<rozmiar; i++)
        {
            nowa[i]=tab[i];
        }
        nowa[rozmiar]=liczba;
        if(tab!=NULL) delete [] tab;
        tab=nowa;
    }
    rozmiar++;
}

void Stos::pop() //usuwanie liczby ze stosu
{
    int* nowa;
    if(rozmiar==1)
    {
        rozmiar=0;
        delete tab;
        tab=NULL;
    }
    else if(rozmiar<1) cout<<"Wystapil blad"<<endl;
    else
    {
        nowa= new int [rozmiar-1];
        int i;
        for(i=0; i<rozmiar-1; i++)
        {
            nowa[i]=tab[i];
        }
        delete [] tab;
        tab=nowa;
        rozmiar--;
    }

}

int Stos::top()
{
    return tab[rozmiar-1];
}

int Stos::isempty()
{
    if(tab==NULL || rozmiar==0) return 1;
    else return 0;
}

int Stos::size()
{
    return rozmiar;
}
