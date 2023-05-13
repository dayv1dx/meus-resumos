#include<iostream>

using namespace std;

int main()
{
    int numero = 0;
   
    for(int i = 0; i < 10; numero++){ // (variáve; condição; incremento)
       cout << i << endl;
    } 
    
    while( numero <= 10 ){
        
        cout << "Digite um número maior que 10\n";
        cin >> numero;
    }
    
    do{
        numero++;
    } while( numero <= 10 ){
        
        cout << numero;
    }
    return 0;
}
