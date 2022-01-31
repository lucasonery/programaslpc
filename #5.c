#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int i, a, b;
    a=5000;
    b=0;
    
    //aloca dinamicamente o vetor a partir de "a"
    vetor = malloc(a*sizeof(int));
    
    //laço que monta o vetor a partir de "a"
    for (i = 0; i < a; i++){     
        vetor[i]=b;
        b++;
        printf("%d \n", vetor[i]);
    }
   
    //libera o vetor
    free (vetor);
    
  return 0;
}
