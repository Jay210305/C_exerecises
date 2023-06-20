#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void leer() {
    string nombre_archivo, linea;

    cout << "Ingrese el nombre del archivo" << endl;
    getline(cin, nombre_archivo);
    ifstream infile(nombre_archivo);

    if (!infile) {
        cerr << "No se puede abrir el archivo: " << nombre_archivo << endl;
        exit(1);
    }

    while (getline(infile, linea)) {
        cout << linea << endl;
    }
      

    infile.close();
}