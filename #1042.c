#include <stdio.h>

int main (){
    
    //variáveis:
    int numero1, numero2, numero3;
    
    //leitura das variáveis:
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    
    
    //Ordenando os números em ordem crescente:
    if (numero1 < numero2 && numero1 < numero3) {
        if (numero2 < numero3) {
            printf("%d\n%d\n%d\n", numero1, numero2, numero3);
        }
        else {
            printf("%d\n%d\n%d\n", numero1, numero3, numero2);
        }
    }
    if (numero2 < numero1 && numero2 < numero3) {
        if (numero1 < numero3) {
            printf("%d\n%d\n%d\n", numero2, numero1, numero3);
        }
        else {
            printf("%d\n%d\n%d\n", numero2, numero3, numero1);
        }
    }    
    if (numero3 <numero1 &&numero3 < numero2) {
        if (numero1 < numero2) {
            printf("%d\n%d\n%d\n", numero3, numero1, numero2);
        }
        else {
            printf("%d\n%d\n%d\n", numero3, numero2, numero1);
        }
    }
    
    //imprimindo o resultado:
    printf("\n%d\n%d\n%d\n", numero1, numero2, numero3);
    
    return 0;
}
