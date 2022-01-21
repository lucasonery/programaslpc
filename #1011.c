#include <stdio.h>
 
int main() {
 
   double raio, volume; //variáveis
   
   scanf("%lf", &raio); //leitura do raio
   
   volume = (4/3.0*3.14159*raio*raio*raio); //cálculo do volume
   
   printf("VOLUME = %.3lf\n", volume); //imprime o resultado
 
    return 0;
}
