#include <stdio.h>

int main(){

    //Declarando e lendo as variáveis;
    int num, i;
    scanf("%d", &num);

    //Laço que calcula quantidade de "HO's" do papai noel:
    for(i = 1; i < num; i++){
        printf("Ho ");
    }
    
    //Imprimindo o resultado:
    printf("Ho!\n");
    return 0;
}
