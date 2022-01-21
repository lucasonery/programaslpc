#include <stdio.h>
 
int main() {
 
    int codigo1, codigo2, numero1, numero2;
    double valorA, valorB, total;
    
    scanf("%d %d %lf \n", &codigo1, &numero1, &valorA); //leitura
    scanf("%d %d %lf \n", &codigo2,&numero2,&valorB);  //leitura
    
    total = (numero1 * valorA) + (numero2 * valorB); //calculo do total
   
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}
