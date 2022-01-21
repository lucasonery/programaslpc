#include <stdio.h>

int main() {
    
    int A, B, C, x;
    
    scanf("%d %d %d", &A, &B, &C); //leitura dos valores
    
    x = (A + B + abs(A-B))/2;  //calculo de quem é o maior
    x = (C + x + abs(x-C))/2; //calculo de quem é o maior
    
    printf("%d eh o maior\n", x); //imprime o resultado
    
    return 0;
}
