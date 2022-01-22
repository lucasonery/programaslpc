#include <stdio.h>

int main(){
    
    //variáveis:
    int codigo, quantidade;
    double total;
    
    //leitura das variáveis:
    scanf("%d %d", &codigo, &quantidade);

    //swich para situações de escolha a partir do código:
    switch(codigo){
        case 1: total = 4 * quantidade; break;
        case 2: total = 4.5 * quantidade; break;
        case 3: total = 5 * quantidade; break;
        case 4: total = 2 * quantidade; break;
        case 5: total = 1.5 * quantidade; break;
        default: break;
    }
    
    //imprimir o resultado:
    printf("Total: R$ %.2lf\n", total);
    
    return 0;
}
