#include <iostream>
#include <string>
using namespace std;

class Client
{
protected:
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

    ~Client(){cout<<"destructed"<<endl;}

};



class SafetyClient : private Client {
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

    string encrypt(string name) {
        string encrypted = "";
        for (int i = 0; i < name.length(); ++i) {
            encrypted += to_string((int)name[i]*2) + "-";
        }
        return encrypted;
    }

    string decrypt(string encrypted) {
    string decrypted = "";
    string num = "";
    for (int i = 0; i < encrypted.length(); ++i) {
        if (encrypted[i] == '-') {
            decrypted += (char)(stoi(num)/2);
            num = "";
        } else {
            num += encrypted[i];
        }
    }
    return decrypted;
}

    void authenticate(string encrypted_name) {
        if (decrypt(encrypted_name) == this->get_name()) {
            authenticated = true;
        }
    }

    ~SafetyClient(){cout<<"destructed"<<endl;}

};


int main(){
SafetyClient cliente_s("Juan Perez", 123, 1000.0);
cliente_s.authenticate(cliente_s.get_encrypted_name());

if (cliente_s.is_authenticated()){
    cout<<"Client is authenticated."<<endl;
}
else{
    cout<<"Client is not authenticated."<<endl;
}

cout << cliente_s.decrypt(cliente_s.get_encrypted_name()) << endl;
return 0;
}