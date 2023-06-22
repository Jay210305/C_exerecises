#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "sumar.h"
#include "max_min.h"
using namespace std;

int main()
{
    vector<int> lista_numeros;
    int numero;
    bool error = false;

    cout << "Ingrese una lista de numeros (para finalizar coloque \"a\")" << endl;
    while (!error)
    {
        cout << "Ingrese el numero: ";
        if(!(cin >> numero)){
            cout << "Fin de la lista";
            error = true;
        }
        lista_numeros.push_back(numero);
        cout << "El numero ha sido agregado" << endl;
    }

    cout << "¿Desea realizar alguna de las siguientes acciones con los elementos de la lista?" << endl;
    int opcion;

    do
    {      
        cout << "Menu" << endl;
        cout << "1 => Sumar todos los valores de la lista" << endl;
        cout << "2 => Hallar valor maximo y minimo" << endl;
        cout << "3 => Ordenar los números de forma ascendente" << endl;
        cout << "4 => Eliminar los números pares de la lista" << endl;
        cout << "5 => Salir" << endl;
        cout << "Opcion: ";
        fflush(stdin);
        cin >> opcion;
        cin >> opcion;
        cout<<"opcion: "<<opcion<<endl;
        switch (opcion)
        {
        case 1:
            cout << sumar(lista_numeros) << endl;
            break;
        case 2:
            max_min(lista_numeros);
            break;
        case 5:
            break;
        default:
            break;
        }

    break;
    } while (opcion!=5);
    return 0;
}