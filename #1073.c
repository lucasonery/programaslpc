#include <stdio.h>

int main() {
    
    //Declarando e lendo as variáveis:
    int numero, i;
    scanf("%d", &numero);
    
    //Laço que calcula o quadrado dos pares:    
    for (i = 2; i <= numero; i = i + 2){
        printf("%d^2 = %d\n", i, i * i);
    }
    
    return 0;
}
