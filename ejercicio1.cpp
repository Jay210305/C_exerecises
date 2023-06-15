#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

bool archivo_existe(const string nombre_archivo)
{
    ifstream archivo(nombre_archivo);
    return archivo.good();
}

int main()
{
    int opcion;
    string nombre_archivo, texto, linea;
    do
    {
        cout << "MENU" << endl;
        cout << "Opcion 1 => Crear archivo" << endl;
        cout << "Opcion 2 => Leer archivo" << endl;
        cout << "Opcion 3 => salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
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
            break;
        
        case 2:
            cout << "Ingrese el nombre del archivo que desea visualizar" << endl;
            cin >> nombre_archivo;
            ifstream archivo(nombre_archivo);
            if (archivo)
            {
                archivo.seekg(0, ios::end);
                streampos tamanio = archivo.tellg();
                archivo.seekg(0, ios::beg);
                if (tamanio > 0)
                {
                    char* buffer = new char[tamanio];
                    archivo.read(buffer, tamanio);

                    for (streampos i = 0; i < tamanio; i++)
                    {
                        cout << hex << setw(2) << setfill('0') << static_cast<int>(buffer[i]) << " ";
                    }
                    delete [] buffer;
                } else {
                    cout << "El archivo esta vacio";
                }
                archivo.close();                
            } else {
                cout << "El archivo esta vacio" << endl;
            }
        
        default:
            break;
        }
    } while (opcion = !3);

    
    

    return 0;
}