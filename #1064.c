#include <stdio.h>

int main() {
    
    //Declarando e lendo variáveis
    float  numero, total, mediavalores;
    int i, qntpositivo;
    qntpositivo = 0;
    total = 0;
    mediavalores = 0;
    
    //Laço que calcula quantidade de positivos:
    for (i = 1; i <= 6; i++) {
        scanf("%f", &numero);
        if (numero > 0) {
            qntpositivo += 1;
            total += numero;
        }
    }
    
    //Cálculo da média:
    mediavalores = total / qntpositivo;

    printf("%d valores positivos\n", qntpositivo);
    printf("%.1f\n", mediavalores);
    
    return 0;
}
