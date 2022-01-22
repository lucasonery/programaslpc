#include <stdio.h>

int main(){
    
    //Declarando e lendo as variáveis:
    int num, i, fat=1;
    scanf("%d", &num);
    
    //Laço que calcula o fatorial:
    for(i = num; i>=1; i--){
        fat*= i;
    }
    
    //Imprimindo o resultado do fatorial de num:
    printf ("%d\n", fat);
    return 0;
}
