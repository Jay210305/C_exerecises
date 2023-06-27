#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

void ordenar_alfabvetica(vector<string> &arreglo)
{
    sort(arreglo.begin(), arreglo.end());
}

int contar_palabra_rep(vector<string> arreglo, string palabra)
{
    int cantidad = count(arreglo.begin(), arreglo.end(), palabra);
    return cantidad;
}

void uppercase(vector<string> &arreglo)
{
    transform(arreglo.begin(), arreglo.end(), arreglo.begin(), [](unsigned char c){return toupper(c);});
}

void mostrar(vector<string> &arreglo){
    for (string element : arreglo)
    {
        cout << element << endl;
    }
}

int main()
{
    vector<string> list;
    string palabra;
    cout << "Ingrese una serie de palabras (para finalizar deje vacia la entrada)" << endl;

    do
    {
        getline(cin, palabra);
        if (palabra != "")
        {
            list.push_back(palabra);
        }
    } while (palabra != "");

    for (string element : list)
    {
        cout << element << endl;
    }

    ordenar_alfabvetica(list);

    for (string element : list)
    {
        cout << element << endl;
    }
    return 0;
}
