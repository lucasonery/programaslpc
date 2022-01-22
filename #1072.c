#include <stdio.h>
int main() {
    
    //Declarando e lendo as variáveis:
    int numteste, i, x, in = 0;
    scanf("%i", &numteste);
    
    //Laço que calcula os valores de in e de out:
    for (i = 0; i < numteste; i++){
        scanf("%i", &x);
        if (x >= 10 && x <= 20) in++;
    }
    
    //Imprime o resultado os que estão dentro e fora do intervalo:
    printf("%i in\n%i out\n", in, numteste-in);
    return 0;
}
