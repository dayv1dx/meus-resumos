#include<iostream>

using namespace std;

// prototipo da função
int soma (int a, int b);
void imprime( string mensagem);

int main() { // função principal
    
    imprime("olá, mundo!");
    cout << soma(1, 2) << endl;
    return 0;
}

// em C++ as funções são definidas depois da main()

// implementar a funcao
int soma (int a, int b){
    return a + b;
}

void imprime( string mensagem){
    cout << "MENSAGEM: " << mensagem << endl;
}