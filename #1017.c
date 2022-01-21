#include <stdio.h>

int main() {
    
    int tempo, velocidade; //variáveis
    float litros;
    
    scanf("%d %d", &tempo, &velocidade); //lê o tempo gasto e a velocidade média
    
    litros = tempo * velocidade / 12.0;
    
    printf("%.3f\n", litros); //imprime o resultado
    
    return 0;
}
