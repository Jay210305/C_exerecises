#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool archivo_existe(const string nombre_archivo)
{
    ifstream archivo(nombre_archivo);
    return archivo.good();
}

void crear(){
    int opcion;
    string nombre_archivo, texto, linea;
    cout << "Ingrese un nombre a crear para el archivo de texto (con su debida extensión)" << endl;
    getline(cin, nombre_archivo);
    if (archivo_existe(nombre_archivo))
    {
        cout << "El archivo ya existe" << endl;
    }
    else
    {
        ofstream archivo{nombre_archivo, ios::out};
        if (archivo)
        {
            cout << "El archivo " << nombre_archivo << " ha sido creado correctamente" << endl;
            cout << "Ingrese el texto que agregara al archivo" << endl;
            getline(cin, texto);
            archivo << texto << endl;
            archivo.close();
        }
        else
        {
            cout << "Error" << endl;
        }
    }
}