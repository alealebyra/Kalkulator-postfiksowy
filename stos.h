#ifndef STOS_H
#define STOS_H
#include <iostream>
#include <string>

using namespace std;

class Stos
{
    private:
    int rozmiar;
    int* tab;

    public:
    Stos();
    Stos(const Stos&);
    ~Stos();

    void push(int&);
    void pop();
    int top();
    int isempty();
    int size();
};

#endif
