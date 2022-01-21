#include <stdio.h>
 
int main(){
    
    float media, nota1, nota2, nota3; // variáveis
    
    scanf("%f %f %f", &nota1, &nota2, &nota3);  //lê as entradas
    media = (nota1*2 + nota2*3 + nota3*5) / (3+2+5); // media das notas
    
    printf("MEDIA = %.1f\n", media); //imprime a resposta
    
    return 0;
}
