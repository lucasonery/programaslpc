#include <stdio.h>

int main() {

    int numero, horas;
    float valor_da_hora;

    scanf("%d %d %f", &numero, &horas, &valor_da_hora);
    

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", (horas*valor_da_hora));

return 0;

}
