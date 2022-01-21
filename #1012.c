#include <stdio.h>
 
int main() {
 
    
    double A, B, C, y, triang, circ, trap, quadr, ret;
    double pi = 3.14159;
    
    scanf("%lf %lf %lf",&A,&B,&C);
    
    triang = A*C/2;
    circ = pi*C*C;
    y = A + B;
    trap = y * C/2;
    quadr = B * B;
    ret = A * B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triang, circ, trap, quadr, ret);
 
    return 0;
}
