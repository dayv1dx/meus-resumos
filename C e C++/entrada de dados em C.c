#include <stdio.h>

int main() {
    
    char nome[30];
    
    puts("qual o seu nome?"); // semelhante ao "printf"
    gets( nome ); // obtém o que foi digitado pelo usuário
    
    printf("O nome digitado foi %s", nome);

    return 0;
}