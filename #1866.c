#include <stdio.h>

int main(){
    
    //Declarando e lendo variáveis:
    int qntdteste, i, c;
    scanf("%d", &qntdteste);

    //Laço que calcula o resultado da soma a partir da quantidade de testes:
    for(i = 1; i <= qntdteste; i++){
        scanf("%d", &c);
        if(c%2==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
    return 0;
}
