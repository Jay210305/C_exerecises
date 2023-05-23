#include <iostream>
#include <cmath>
using namespace std;

class Figura
{
public:
    virtual void calcular_area() = 0;

    ~Figura(){}
};

class Triangulo : public Figura
{
private:
    float base;
    float altura;

public:
    Triangulo(float base, float altura) : base(base), altura(altura) {}
    void calcular_area() override
    {
        int area = (base * altura) / 2;
        cout << "El área de la figura es: " << area << endl;
    }

    ~Triangulo(){}
};

class Rectangulo : public Figura
{
private:
    float base;
    float altura;

public:
    Rectangulo(float base, float altura) : base(base), altura(altura) {}
    void calcular_area() override
    {
        int area = (base * altura);
        cout << "El área de la figura es: " << area << endl;
    }

    ~Rectangulo(){}
};

class Circulo : public Figura
{
private:
    float radio;

public:
    Circulo(float radio) : radio(radio) {}
    void calcular_area() override
    {
        float area = (M_PI * pow(radio, 2));
        cout << "El área de la figura es: " << area << endl;
    }

    ~Circulo(){}
};

int main()
{
    int opcion;
    float base;
    float altura;
    float radio;
    do
    {
        cout << "Menu" << endl;
        cout << "Escoja una figura para calcular su area";
        cout << "1 => Triangulo\n2 => Rectangulo\n3 => Circulo\n4 => Salir" << endl;
        cout << "Ingrese una opcion";
        cin >> opcion;

        if (opcion < 1 || opcion > 4)
        {
        cout << "Opcion invalida. Intente de nuevo." << endl;
        continue;
        }

        switch (opcion)
        {
        case 1:
            cout << "Ingrese la longitud de la base: ";
            cin >> base;
            cout << "Ingrese la longitud de la altura: ";
            cin >> altura;
            Triangulo triangulo (base,altura);
            triangulo.calcular_area();
            break;

        case 2:
            cout << "Ingrese la longitud de la base: ";
            cin >> base;
            cout << "Ingrese la longitud de la altura: ";
            cin >> altura;
            Rectangulo rectangulo (base,altura);
            rectangulo.calcular_area();
            break;
        
        case 3:
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            Circulo circulo (radio);
            circulo.calcular_area();
            break;
        }
    } while (opcion != 4);
    cout << "Hasta luego";
    return 0;
}