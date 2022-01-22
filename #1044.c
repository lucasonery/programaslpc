#include <stdio.h>

int main (){
    
    //Declarando as variáveis:
    int A, B;
    
    //Lendo as variáveis:
    scanf("%d %d", &A, &B);
    
    //Verificando multiplicidade:
    if (A%B == 0 || B%A==0) {
        printf("Sao Multiplos\n");
    }
    else {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
