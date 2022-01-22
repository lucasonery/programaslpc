#include <stdio.h>

int main() {
    
    //variáveis:
    float x, y;
    
    //Leitura das variáveis:
    scanf("%f %f", &x, &y);
    
    //Procurando os quadrantes para cada caso:
    if (x == 0 && y == 0){
        printf("Origem\n");
    }else if (x > 0 && y > 0){
        printf("Q1\n");
    }else if (x < 0 && y > 0){
        printf("Q2\n");
    }else if (x < 0 && y < 0){
        printf("Q3\n");
    }else if (x > 0 && y < 0){
        printf("Q4\n");
    }else if (x == 0){
        printf("Eixo Y\n");
    }else if (y == 0){
        printf("Eixo X\n");
    }
    
    return 0;
}
