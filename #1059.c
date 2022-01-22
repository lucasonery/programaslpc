#include <stdio.h>

int main() {
    
    //Declarando as variáveis:
    int n, i;
    
    n = 100;
    
    //Laço para mostrar todos os pares de 1 até 100:
    for(i =2; i <= n; i = i+2){
        printf("%d\n", i);
    }

    return 0;
}
