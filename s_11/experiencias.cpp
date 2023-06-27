#include <iostream>
#include <string>
#include <vector>
using namespace std;

void max_min(vector<int> arreglo)
{
    int max = arreglo[0];
    int min = arreglo[0];
    for (int elemento : arreglo)
    {
        if (elemento > max)
        {
            max = elemento;
        }
        if (elemento < min)
        {
            min = elemento;
        }
    }
    cout << "El valor mayor es: " << max << endl;
    cout << "El valor menor es: " << min << endl;
}

int sumar(vector<int> arreglo)
{
    int acumulador = 0;
    for (int i = 0; i < arreglo.size(); i++)
    {
        acumulador = acumulador + arreglo[i];
    }
    return acumulador;
}

void ordenar_ascendente(vector<int> &arreglo)
{
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

void eliminar_pares(vector<int> &arreglo)
{
    vector<int> impares;
    for (int element : arreglo)
    {
        if (element % 2 != 0)
        {
            impares.push_back(element);
        }
    }
    arreglo = impares;
}

void mostrar(vector<int> &arreglo)
{
    cout << "El contenido del arreglo es: ";
    for (int elemento : arreglo)
    {
        cout << elemento << "; ";
    }
}

int main()
{
    vector<int> lista_numeros;
    int numero;
    bool error = false;

    cout << "Ingrese una lista de numeros (para finalizar coloque \"0\")" << endl;
    while (!error)
    {
        cout << "Ingrese el numero: ";
        cin >> numero;
        if (0 == numero)
        {
            cout << "Fin de la lista" << endl;
            error = true;
        }
        lista_numeros.push_back(numero);
        cout << "El numero ha sido agregado" << endl;
    }

    cout << "¿Desea realizar alguna de las siguientes acciones con los elementos de la lista?" << endl;
    int option;

    do
    {
        cout << "Menu" << endl;
        cout << "1 => Sumar todos los valores de la lista" << endl;
        cout << "2 => Hallar valor maximo y minimo" << endl;
        cout << "3 => Ordenar los numeros de forma ascendente" << endl;
        cout << "4 => Eliminar los numeros pares de la lista" << endl;
        cout << "5 => Mostrar arreglo" << endl;
        cout << "6 => Salir" << endl;
        cout << "Opcion: ";
        std::cin >> option;

        switch (option)
        {
        case 1:
            cout << "La suma de los valores del vector es: " << sumar(lista_numeros) << endl;
            break;
        case 2:
            max_min(lista_numeros);
            break;
        case 3:
            max_min(lista_numeros);
            break;
        case 4:
            eliminar_pares(lista_numeros);
            break;
        case 5:
            mostrar(lista_numeros);
            break;
        case 6:
            break;
        default:
            break;
        }
    } while (option != 6);
    return 0;
}