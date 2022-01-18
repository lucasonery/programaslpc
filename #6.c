#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int matriz[9][9]){

    int i, j;
    srand(time(0));    
    for ( i=0; i<9; i++ ){
        for ( j=0; j<9; j++ ) {
             matriz[i][j] = rand()%10;
         }
    }
    return;
}

void imprime(int matriz[9][9]){

    int i, j;
    for ( i=0; i<9; i++ ){
        for ( j=0; j<9; j++ ) {
             printf("%d", matriz[ i ][ j ]);
        }
    }
    return;
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

return 0;
}
