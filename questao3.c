#include <stdio.h>

void main (void){
    float dolar;
    float resultado;

    printf("Insira o valor do celular($): ");
    scanf("%f", &dolar);

    resultado= dolar*3.17;

    if (resultado<1000.00){
        printf("Bom négocio!\n");
    }
}
