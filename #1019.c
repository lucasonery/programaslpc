// Programa que calcula o tempo de duração em segundos 
// de um determinado evento em uma fábrica

#include <stdio.h>

int main() {
    int seg, hora, min, s;
    
    scanf("%d", &seg); //lê os segundos
    
    hora = seg / 3600;
    seg -= hora * 3600;
    min = seg / 60;
    seg -= min * 60;
    
    printf("%i:%i:%i\n", hora, min, seg); //imprime o resultado
    
    return 0;
}
