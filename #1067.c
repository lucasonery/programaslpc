#include <stdio.h>

int main() {

    //Declarando e lendo as variáveis:
    int i, numero;
    scanf("%d",&numero);
    
    if(numero%2==0){
        numero = numero-1;
    }
    
    //Laço para os números ímpares:
    for(i = 1; i <= numero; i += 2){
        printf("%d\n",i);
    }
    return 0;
}
