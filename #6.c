#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int **matriz){
    int i, j;
    
    srand ((0)); //sempre inicia com valores aleatorios a matriz
    for ( i = 0; i < 9; i++ ){
        for ( j = 0; j < 9; j++ ) {
            matriz[i][j] = rand()%10;  //valores aleatorios até 10
        }
    }
}

void imprime(int **matriz){     //imprime matriz
    int i, j;
    
    for (i = 0; i < 9; i++){
        for ( j = 0; j < 9; j++) {
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
}

void libera(int **matriz){     //libera a matriz dinamicamente
    
    int i;
    
    for (i = 0; i < 9; i++){
        free(matriz[i]);
    }
    
    free (matriz);
}

int main(){

    int **matriz;
    int i, j;
    
    matriz = malloc(9*sizeof(int*));

    for(i = 0; i < 9; i++){
        matriz[i] = malloc(9*sizeof(int));
    }

    preenche(matriz);
    imprime(matriz);
    libera(matriz);
    
return 0;
}
