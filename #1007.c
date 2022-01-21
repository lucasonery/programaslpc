#include <stdio.h>
 
int main(){
    
   int A, B, C, D, dif; //variáveis
    
    scanf("%d %d %d %d", &A, &B, &C, &D);  //lê as entradas
    dif = (A * B - C * D);   //diferença dos produtos
    
    printf("DIFERENCA = %d\n", dif); //imprime a resposta
    
    return 0;
}
