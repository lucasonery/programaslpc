#include <stdio.h>
 
int main() {
 
    int distancia;
    float gas, consumo;
    
    scanf("%d %f", &distancia, &gas); //leitura da distancia e da gasolina
    
    consumo = distancia/gas; //calculo do consumo
    
    printf("%.3f km/l\n", consumo); //imprime o resultado
 
    return 0;
}
