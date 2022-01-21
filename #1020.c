// Programa que lê um valor correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias


#include <stdio.h>

int main() {
    
    int x, y, z;
    
    scanf("%d", &x); //valor correspondente à idade.

    y = x / 365;
    x -= y * 365;
    z = x / 30;
    x -= z * 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, z, x); //imprime o resultado
    
    return 0;
}
