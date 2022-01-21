#include <stdio.h>
 
int main() {
 
    float distancia, x1, x2, y1, y2; //variáveis
    
    scanf("%f %f", &x1, &y1); //leitura do p1
    scanf("%f %f", &x2, &y2); //leitura do p2
    
    distancia = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)); //calculo da distancia de dois pontos
    
    printf("%.4f\n", distancia); //imprime o resultado
 
    return 0;
}
