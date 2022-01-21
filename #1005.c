#include <stdio.h>
 
int main(){
    
    float media, nota1, nota2; // variáveis
    
    scanf("%f %f", &nota1, &nota2);  //lê as entradas
    media = (nota1*3.5 + nota2*7.5)/(3.5+7.5); // media das notas
    
    printf("MEDIA = %5f\n", media); //imprime a resposta
    
    return 0;
}
