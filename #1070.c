#include <stdio.h>

int main() {
    
    //Declarando e lendo as variáveis:
    int numero, i = 0;
    scanf("%i", &numero);
    
   //Verificando se número é ímpar: 
    if (numero % 2 == 0){
        numero++;
    }
    
    //Laço que calcula a quantidade de ímpares:
    while (i < 6) {
        printf("%i\n", numero);
        i++;
        numero += 2;
    }
    
    return 0;
}
