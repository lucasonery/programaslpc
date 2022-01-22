#include <stdio.h>

int main() {

    //Declarando as variáveis:
    int i, num, qntdpar;
    qntdpar = 0; 
    
    //Laço que calcula a quantidade de valores pares:
    for(i = 1; i <= 5; i++){
        scanf("%d", &num);
        if (num%2==0){
            qntdpar++;
        }
    }
    
    //Imprimindo o resultado:
    printf("%d valores pares\n", qntdpar);

    return 0;
}
