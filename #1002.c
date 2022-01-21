// Programa que calcula a área de um círculo

#include <stdio.h>
#include <math.h>

int main (){
    
    double raio, area, pi;
    
    scanf("%lf", &raio);
    
    pi = 3.14159;
    area = (raio * raio) * pi;
    
    printf("A=%.4lf\n", area);
    
    return 0;
}
