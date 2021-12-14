#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor;
    int j, a, b;
    a=5000;
    b=0;
    for (j=0;j<a;j++){
        vetor=malloc(xsizeof(int));
        vetor[j]=b;
        b++;
        printf("%d \n", vetor[j]);
    }
  return 0;
}
