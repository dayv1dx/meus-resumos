#include<iostream>

using namespace std;

/* 
Ponteiro é um tipo de dado cujo calor se refere diretamente a um outro valor
alocado em outra área da memória, através de seu endereço.
*/

int main(){
    
    int numero = 5;
    int *ponteiro = &numero;
    
    cout << "valor da variável número: " << numero << endl;
    cout << "Posição de memória da váriavel número: " << &numero << endl;
    
    cout << "ponteiro: " << ponteiro;
    
    
    
    return 0;
}
