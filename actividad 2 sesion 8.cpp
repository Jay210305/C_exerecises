#include <iostream>
#include <cmath>
using namespace std;

class Forma{
    virtual void calcular_perimetro() = 0;
};

class Circulo : public Forma{
private:
    float radio;
public:
    Circulo(float radio):radio(radio){}
    void calcular_perimetro() override{
        float perimetro;
        perimetro = 2*M_PI*radio;
        cout << "El perimetro de la figura es: " << perimetro << endl;
    }
    ~Circulo() {}
};

class Rectangulo : public Forma{
private:
    float base;
    float altura;
public:
    Rectangulo(float base, float altura):base(base), altura(altura){}
    void calcular_perimetro() override{
        float perimetro;
        perimetro = 2*base+2*altura;
        cout << "El perimetro de la figura es: " << perimetro << endl;
    }
    ~Rectangulo() {}
};

class Triangulo : public Forma{
private:
    float lado1;
    float lado2;
    float lado3;
public:
    Triangulo(float lado1, float lado2, float lado3):lado1(lado1), lado2(lado2), lado3(lado3){}
    void calcular_perimetro() override{
        float perimetro;
        perimetro = lado1+lado2+lado3;
        cout << "El perimetro de la figura es: " << perimetro << endl;
    }
    ~Triangulo() {}
};

int main (){
    int opcion;
    float base;
    float altura;
    float radio;
    float lado1;
    float lado2;
    float lado3;
    do
    {
        cout << "Menu" << endl;
        cout << "Escoja una figura para calcular su area" << endl;
        cout << "1 => Circulo\n2 => Rectangulo\n3 => Triangulo\n4 => Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion < 1 || opcion > 4)
        {
            cout << "Opcion invalida. Intente de nuevo." << endl;
            continue;
        }

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            {
                Circulo circulo(radio);
                circulo.calcular_perimetro();
            }
            break;

        case 2:
            cout << "Ingrese la longitud de la base: ";
            cin >> base;
            cout << "Ingrese la longitud de la altura: ";
            cin >> altura;
            {
                Rectangulo rectangulo(base, altura);
                rectangulo.calcular_perimetro();
            }
            break;

        case 3:
            cout << "Ingrese la longitud del primer lado: ";
            cin >> lado1;
            cout << "Ingrese la longitud del segundo lado: ";
            cin >> lado2;
            cout << "Ingrese la longitud del tercer lado: ";
            cin >> lado3;
            {
                Triangulo triangulo(lado1, lado2, lado3);
                triangulo.calcular_perimetro();
            }
            break;
        }
    } while (opcion != 4);

    cout << "Hasta luego" << endl;
    return 0;
}