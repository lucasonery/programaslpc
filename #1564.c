#include <stdio.h>

int main() {

    //Declarando a variável:
    int numreclamacao;
    
    //Laço que verifica o número de reclamações e diz se vai ter copa ou não:
    while (scanf("%d", &numreclamacao) != EOF) {
        if (numreclamacao == 0) {
            printf("vai ter copa!\n");
        }
        else{
            printf("vai ter duas!\n");
        }
    }
    return 0;
}
