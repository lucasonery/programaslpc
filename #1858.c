#include <stdio.h>

int main() {
    
    
    //Definindo e lendo as variáveis:
    int numero, valor, posicao, menor, i;
    scanf("%i", &numero);
    
    menor = 21;
    posicao = 1;
    i = 1;
    
    //Laço que calcula a posição da pessoa que Theon deve dizer ao seu algoz:
    while(i <= numero) {
        scanf("%i", &valor);
        if (valor < menor){
            posicao = i;
            menor = valor;
        }
        i++;
    }
    
    //Imprimindo o resultado:
    printf("%i\n", posicao);

    return 0;
}
