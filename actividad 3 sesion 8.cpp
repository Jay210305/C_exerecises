#include <iostream>
#include <cmath>
using namespace std;


class Animal{
private:
    Animal** array_animales;
public:
    virtual void hacer_sonido() = 0;
    virtual void agregar_animal() = 0;
};

class Perro:public Animal{
    void hacer_sonido() override{
        cout << "Guau - Guau!!" << endl;
    }
    void agregar_animal(Perro*) override{
            Student** tempPt = new Student* [max + 1];
            for( int i = 0; i < howMany; i++){
                tempPt[i] = studArray[i];       
            }
            delete [] studArray;
            studArray = tempPt;
        studArray[ howMany ] = nextEl;
    }
    }
};

class Gato:public Animal{
    void hacer_sonido() override{
        cout << "Miau - Miau!!" << endl;
    }
};

int main() {

    return 0;
}