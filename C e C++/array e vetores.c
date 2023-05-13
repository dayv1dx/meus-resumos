#include<stdio.h>

int main(){
    
    int matriz[10] = {1,2,3,4,5,6,7,8,9};
    char curso[10] = {'c', 'u', 'r', 's', 'o'};
    char nome[10] = "Dayv1dx";
    
    for(int i = 0; i < 10; i++){
        printf("%d\n", matriz[i]);
    }
    
     for(int j = 0; j < 10; j++){
        printf("%c\n", curso[j]);
    }
    
    printf("%i",sizeof(nome)); // função que retorna o tamanho do array
    
    return 0;
}
