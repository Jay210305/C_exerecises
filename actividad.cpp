#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
bool compareData(T data1, T data2) {
    return data1 < data2;
}

#include <iostream>
#include <string>
using namespace std;

template <typename D,typename N>
D CalcularDistancia(D dirN, N dirD){
    cout<<"La direccion "<<dirN<<" esta ubicada a: "<<dirD<<" Km"<<endl;
    return "";
}
template <typename T>
T TiempoEntrega(T dirD){
    cout<<"El tiempo estimado de entrega seria de: "<<dirD*2<<" min"<<endl;
    return 0;
}
template <typename I,typename G, typename S>
I GeneracionInformes(I dirN, G dirD, S prod){
    cout<<"El nombre de la direccion de entrega del producto es: "<<dirN<<endl;
    cout<<"La distancia para entregar el producto es: "<<dirD<<endl;
    cout<<"El producto a entregar es: "<<prod<<endl;
    return "";
}

int main(){
    int opc;
    cout<<"1.- Calcular la distancia 2.- Tiempo estimado de entrega 3.- Generacion de Informe"<<endl;
    cin>>opc;
    cout<<"Ingrese el numero de la solicitud que desea realizar: "<<endl;
    string dirN="Av.avelino";
    int dirD=15;
    string prod="15 tubos de 30 in";
    //string dirN="Av.goyoneche";
    //int dirD=30;
    //string dirN="Av.ejercito";
    //int dirD=45;
    
    if(opc=1){
    CalcularDistancia <string,int>(dirN,dirD);
    }
    if(opc=2){
    TiempoEntrega<int>(dirD);
    }
    if(opc=3){
    GeneracionInformes<string,int,string>(dirN,dirD,prod);
    }
}

void displayMap(const vector<string>& map) {
    for (const string& row : map) {
        cout << row << endl;
    }
}

int main(){
    
    vector<std::string> asciiMap = {
        "    1| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|14|15|16|17|18",
        " ========================================================",
        "1||                                                     ||",
        "2||                                                     ||",
        "3||                                                     ||",
        "4||                                                     ||",
        "5||                                                     ||",
        "6||                                                     ||",
        "7||                                                     ||",
        "8||                                                     ||",
        " ========================================================="
    };

    do{
        

        cout <<"Sistema logistica"<<endl;
        cout<<"Menu"<<endl;
        displayMap(asciiMap);



        break;
    }while (true);
    return 0;
}
