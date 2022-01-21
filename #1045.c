// Programa que verifica o tipo de um triângulo

#include <stdio.h>

int main()
{
    double a, b, c, x;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a <= 0 || b <= 0 || c <=0){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (b > a){
            x = 0;
            x = a;
            a = b;
            b = x;
        }
        if (c > a){
            x = 0;
            x = a;
            a = c;
            c = x;
        }
        if (a >= b+c){
            printf("NAO FORMA TRIANGULO\n");
        }
        else{
            if (a*a == b*b + c*c){
                printf("TRIANGULO RETANGULO\n");
            }
            else{
                if (a*a > b*b + c*c){
                    printf("TRIANGULO OBTUSANGULO\n");
                }
                else{
                    if (a*a < b*b + c*c){
                        printf("TRIANGULO ACUTANGULO\n");
                    }
                }
            }
            if (a == b && b == c){
                printf("TRIANGULO EQUILATERO\n");
            } 
            if (a == b && a != c || b == c && b != a || c == a && c != b){
                printf("TRIANGULO ISOSCELES\n");
            }   
        }
    }

return 0;
}
