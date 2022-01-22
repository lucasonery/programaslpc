#include<stdio.h>

int main(){
    
    //Declarando e lendo as variáveis:
    int num, a, i, j, x;
    scanf("%d",&a);
    
    //Laço que tem como objetivo ver se numero é perfeito ou não:
    for(i = 0; i < a; i++){
        x = 0;
        scanf("%d",&num);
        
        for(j = 1; j < num; j++){
            if(num%j==0) x+= j;
        }
        if (x==num){
            printf("%d eh perfeito\n", num);
        }
        else{ 
            printf("%d nao eh perfeito\n", num);
        }
    }
    return 0;
}
