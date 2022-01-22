#include <stdio.h>


int main(){
    
    double n1, n2, n3, n4, media, mediaexame;
    
    scanf("%lf %lf %lf %lf ", &n1, &n2, &n3, &n4);
    
    media = ((2*n1) + (3*n2) + (4*n3) + (1*n4))/10; //cálculo da média
    printf("Media: %.1f\n", media);
    
    
    //condições do aluno ser aprovado:
    if (media >= 7.0){              
        printf("Aluno aprovado.\n");
    }
    
    //caso o aluno esteja em exame:
    else if (media >= 5.0){         
        printf("Aluno em exame.\n");
        
        scanf("%lf", &mediaexame);
        printf("Nota do exame: %.1f\n", mediaexame);
        
        if (mediaexame + media / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (mediaexame + media ) / 2.0);
    }
    
    //caso aluno seja reprovado:
    else{                           
        printf("Aluno reprovado.\n");
    }
    return 0;
}
