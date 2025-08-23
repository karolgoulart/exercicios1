#include <stdio.h>

void main (){

    float milha;
    float vel;

    printf ("Insira a velocidade do carro (em milhas): \n");
    scanf ("%f", &milha);

    vel= milha*1.6;

    if (vel<80.0) {
        printf("Acelere!\n");
    }
    else if(vel<=100.0) {
        printf("Mantenha!\n");
    }
    else {
        printf("Desacelere!\n");
    }
}
