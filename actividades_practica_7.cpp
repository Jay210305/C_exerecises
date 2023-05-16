#include <iostream>
#include <string>
using namespace std;

class Client
{
private:
    string name;
    int id;
    double status; // status de saldo
    bool deudan_client;
public:
    Client(string name, int id, double status,bool deudan_client=false):name(name), id(id), status(status){}
    string get_name (){
        return name;
    };
    int get_id (){
        return id;
    };
    double get_status (){
        return status;
    };
    bool get_deudan_client (){
        return deudan_client;
    };
    void set_name (string n){
        name = n;
    }
    void set_id (int i){
        id = i;
    }
    void set_status (double s){
        status = s;
    }
    void set_deudan_client (int d){
        if (d==1)
        {
            deudan_client = true;
        }
    }

    void show(){
        cout << "Nombre: " << name << " ID: " << id << " Saldo: " << status << " Deuda: " << deudan_client << endl;
    }
};

#include <iostream>
#include <string>
using namespace std;

class Cliente
{
private:
    string name;
    int id;
    double status; // status de saldo
    bool deudan_client;
public:
    Cliente(string name, int id, double status,bool deudan_client=false):name(name), id(id), status(status){}
    string get_name (){
        return name;
    };
    int get_id (){
        return id;
    };
    double get_status (){
        return status;
    };
    bool get_deudan_client (){
        return deudan_client;
    };
    void set_name (string n){
        name = n;
    }
    void set_id (int i){
        id = i;
    }
    void set_status (double s){
        status = s;
    }
    void set_deudan_client (int d){
        if (d==1)
        {
            deudan_client = true;
        }
    }
};

class SafetyClient : public Client {
private:
    string encrypted_name;
    bool authenticated;
public:
    SafetyClient(string name, int id, double status, bool deudan_client = false) : Client(name, id, status, deudan_client) {
        encrypted_name = encrypt(name); // encrypt the client name
        authenticated = false; // client is not yet authenticated
    }

    string get_encrypted_name() {
        return encrypted_name;
    }

    bool is_authenticated() {
        return authenticated;
    }

    void authenticate(string name) {
        if (name == this->get_name()) {
            authenticated = true;
        }
    }

    // encryption method to encrypt client name
    string encrypt(string name) {
        string encrypted = "";
        for (int i = 0; i < name.length(); ++i) {
            encrypted += to_string((int)name[i]*2) + "-";
            cout << encrypted << endl;
        }
        return encrypted;
    }
};


int main(){
SafetyClient cliente_s("Juan Perez", 123, 1000.0);
cliente_s.authenticate("Juan Perez");

if (cliente_s.is_authenticated()){
    cout<<"Client is authenticated."<<endl;
}
else{
    cout<<"Client is not authenticated."<<endl;
}
return 0;
}
