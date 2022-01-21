#include <stdio.h>
 
int main() {
 
    char nome;
    double salario, venda, montante;
    
    scanf("%s", &nome);
    scanf("%lf %lf", &salario, &venda);
   
   montante = (salario + (venda*0.15));
   
   
    printf("TOTAL = R$ %.2lf\n", montante);
    
    return 0;
}

