#include <iostream>
#include <string>
#include <vector>
using namespace std;

int sumar(vector <int> arreglo){
    int acumulador=0;
    for (int i = 0; i < arreglo.size(); i++)
    {
        acumulador=acumulador+i;
    }
    return acumulador;
}