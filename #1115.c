#include <stdio.h>

int main(){
    
    //Declarando e lendo as variáveis (coordenadas):
    int x1, y1;
    scanf("%d %d", &x1, &y1);

    //Testando e lendo qual quadrante está cada coordenada:
    if(x1 == 0 || y1 == 0){
        return 0;
    }
    while(x1 != 0 || y1 != 0){
        if(x1 > 0 && y1 > 0){
            printf("primeiro\n");
        }
        if(x1 < 0 && y1 > 0){
            printf("segundo\n");
        }
        if(x1 < 0 && y1 < 0){
            printf("terceiro\n");
        }
        if(x1 > 0 && y1 < 0){
            printf("quarto\n");
        }
        
        scanf("%d %d", &x1, &y1);
        
        if(x1 == 0 || y1 == 0){
            return 0;
        }
    }

    return 0;
}
