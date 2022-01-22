#include <stdio.h>

int main(){
    
    //Declarando e lendo as variáveis:
    int num, i;
    double x, y, z;
    scanf("%i",&num);
    
    //Laço que calcula a média ponderada de cada linha:
    for (i = 0; i < num; i++){
        scanf("%lf %lf %lf", &x, &y, &z);
        printf("%.1lf\n",(x * 2 + y * 3 + z * 5)/10);
    }
    
    return 0;
}
