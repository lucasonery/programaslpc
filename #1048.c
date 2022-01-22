#include <stdio.h>

int main (){
    
    //Declarando as variáveis:
    double salarioatual, novo, reajuste, perc;
    
    //Lendo as entradas:
    scanf("%lf %lf", &salarioatual, &novo);
    
    
    //Verificando os intervalos do salário para realizar o reajuste:
    if (salarioatual >= 0 && salarioatual <= 400.00) {
        novo = salarioatual * 1.15;
        reajuste = novo - salarioatual;
        perc = 15;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %\n", novo, reajuste, perc);
    }
    else if (salarioatual >= 400.01 && salarioatual <= 800.00){
        novo = salarioatual * 1.12;
        reajuste = novo - salarioatual;
        perc = 12;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %\n", novo, reajuste, perc);
    }
    else if(salarioatual >= 800.01 && salarioatual <= 1200.00){
        novo = salarioatual * 1.10;
        reajuste = novo - salarioatual;
        perc = 10;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %\n", novo, reajuste, perc);
    }
    else if(salarioatual >= 1200.01 && salarioatual <= 2000.00){
        novo = salarioatual * 1.07;
        reajuste = novo - salarioatual;
        perc = 7;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %\n", novo, reajuste, perc);
    }
    else if(salarioatual > 2000.00){
        novo = salarioatual * 1.04;
        reajuste = novo - salarioatual;
        perc = 4;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %\n", novo, reajuste, perc);
    }
    
    
    return 0;
}
