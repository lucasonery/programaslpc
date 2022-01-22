#include <stdio.h>

int main() {
    
    //Declarando e lendo as variáveis: 
    int numero, i, x, y;
    scanf("%d", &numero);
    
    //Laço que verifica se é possível realizar a divisão 
    //e se positivo, a divisão ocorre
    for (i = 0; i < numero; i++) {
        scanf("%d %d", &x, &y);
        if (y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n", x/(double)y);
    }
    return 0;
}
