#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
bool compareData(T data1, T data2) {
    return data1 < data2;
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