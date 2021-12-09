#include <stdio.h>
int main(){
    int M[2][2];
    int i, j, cont;
    cont=0;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cont++;
            M[i][j]=cont;
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
} 
