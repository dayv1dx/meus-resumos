#include <stdio.h>

int main() {
    
    int x = 5;
    
    switch( x ){
        case 1 : 
            printf("one");
        break;
        
        case 2 : 
            printf("two");
        break;
        
        case 3 : 
            printf("three");
        break;
        
        default :
            printf("i don't know");
        break;
    }

    return 0;
}