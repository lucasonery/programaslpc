#include <stdio.h>

int main (){
    
    //Declarando as variáveis:
    double a, b, c;
    
    //Lendo as variáveis:
    scanf("%lf %lf %lf", &a, &b, &c);

    
    //Calculando o perímetro caso seja um triângulo:
    if (a < b+c && b < a+c && c < a+b){
        printf("Perimetro = %.1lf\n", a+b+c);
    }
    
    //Calculando a área caso não seja um triângulo e sim um trapézio:
    else{
        printf("Area = %.1lf\n", (a+b)*c/2.0);
    }
    
    return 0;
}
