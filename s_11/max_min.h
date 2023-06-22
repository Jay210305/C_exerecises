#include <iostream>
#include <string>
#include <vector>
using namespace std;

void max_min(vector <int> arreglo){
    int max = arreglo [0];
    int min = arreglo [0];
    for (const auto& elemento : arreglo)
    {
        if (elemento>max){
            max=elemento;
        }
        if (elemento<min){
            min=elemento;
        }
        cout << "El valor mayor es: " << max << endl;
        cout << "El valor menor es: " << max << endl;
    }
    
}