#include <iostream>
#include <cmath>
using namespace std;

class Figura
{
public:
    virtual void calcular_area() = 0;

    virtual ~Figura() {}
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
        float area = (base * altura) / 2.0;
        cout << "El area de la figura es: " << area << endl;
    }

    ~Triangulo() {}
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
        float area = base * altura;
        cout << "El area de la figura es: " << area << endl;
    }

    ~Rectangulo() {}
};

class Circulo : public Figura
{
private:
    float radio;

public:
    Circulo(float radio) : radio(radio) {}
    void calcular_area() override
    {
        float area = M_PI * pow(radio, 2);
        cout << "El area de la figura es: " << area << endl;
    }

    ~Circulo() {}
};

class Pentagono : public Figura
{
private:
    float apotema;
    float lado;

public:
    Pentagono(float apotema, float lado) : apotema(apotema), lado(lado) {}
    void calcular_area() override
    {
        float area = (5*lado*apotema)/2;
        cout << "El area de la figura es: " << area << endl;
    }

    ~Pentagono() {}
};

class Cuadrado : public Figura
{
private:
    float lado;

public:
    Cuadrado(float lado) : lado(lado) {}
    void calcular_area() override
    {
        float area = pow(lado,2);
        cout << "El area de la figura es: " << area << endl;
    }

    ~Cuadrado() {}
};

int main()
{
    int opcion;
    float base;
    float altura;
    float radio;
    float apotema;
    float lado;
    do
    {
        cout << "Menu" << endl;
        cout << "Escoja una figura para calcular su area" << endl;
        cout << "1 => Triangulo\n2 => Rectangulo\n3 => Circulo\n4 => Pentagono\n5 => Cuadrado\n6 => Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion < 1 || opcion > 6)
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
            {
                Triangulo triangulo(base, altura);
                triangulo.calcular_area();
            }
            break;

        case 2:
            cout << "Ingrese la longitud de la base: ";
            cin >> base;
            cout << "Ingrese la longitud de la altura: ";
            cin >> altura;
            {
                Rectangulo rectangulo(base, altura);
                rectangulo.calcular_area();
            }
            break;

        case 3:
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            {
                Circulo circulo(radio);
                circulo.calcular_area();
            }
            break;

        case 4:
            cout << "Ingrese la longitud de la apotema: ";
            cin >> apotema;
            cout << "Ingrese la longitud de yun lado de la figura: ";
            cin >> lado;
            {
                Pentagono pentagono(apotema, lado);
                pentagono.calcular_area();
            }
            break;

        case 5:
            cout << "Ingrese la longitud de un lado: ";
            cin >> lado;
            {
                Cuadrado cuadrado(lado);
                cuadrado.calcular_area();
            }
            break;
        }
    } while (opcion != 6);

    cout << "Hasta luego" << endl;
    return 0;
}