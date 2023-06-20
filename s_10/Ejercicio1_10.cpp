#include <iostream>
#include <string>
#include <iomanip>
#include <crear.h>
#include <leer.h>
using namespace std;


int main()
{
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
            crear();
            break;
        
        case 2:
            leer();
            break;
        }
        case 3:
            break;
        default:
            break;
    } while (opcion = !3);

    return 0;
}