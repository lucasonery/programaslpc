#include<stdio.h>
 
int main(){
    
    //Declarando variáveis:
    float x;
    int i, positivos;
    
    positivos = 0;
    
    //Laço para mostrar os valores positivos:
    for(i=1; i<=6; i++){
        scanf("%f", &x);
        if(x > 0){
            positivos= positivos+1;
        }
    }
    
    //Imprimindo o resultado:
    printf("%d valores positivos\n", positivos);
    
    return 0;
}
