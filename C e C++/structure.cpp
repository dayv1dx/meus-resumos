#include<iostream>
#include<string>

using namespace std;

// são estruturas feitas para armazenar dados, semelhante a classes.
struct clientes{
    
    int cliente_id;
    string nome; 
    int idade; 
    float salario;
    
};

int main(){
    
    clientes meu_cliente;
    
    meu_cliente = {1, "Dayv1dx", 30, 1000 };
    
    cout << "Id do cliente" << meu_cliente.cliente_id << endl;

    return 0;
}
