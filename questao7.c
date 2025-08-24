#include <stdio.h>

void main() {
    char times[20][50];
    int vitorias[20], empates[20], derrotas[20], pontos[20];
    int i=1;
    int maiorpont=0;
    int menorpont=200;  
    int timemaior=0;
    int timemenor=0;        

    
    while (i<=20) {
        printf("Digite o nome do time %d: ", i);
        scanf("%s", times[i]);

        printf("Número de vitórias: ");
        scanf("%d", &vitorias[i]);

        printf("Número de empates: ");
        scanf("%d", &empates[i]);

        printf("Número de derrotas: ");
        scanf("%d", &derrotas[i]);

        
        pontos[i]= 3*vitorias[i] + empates[i];
        
        if (pontos[i] > maiorpont) {
            maiorpont= pontos[i];
            timemaior= i;
        }

        if (pontos[i] < menorpont) {
            menorpont = pontos[i];
            timemenor= i;
        }
        i++;

    }

    printf("Time com a maior pontuação: %s (%d pontos)\n", times[timemaior], maiorpont);
    printf("Time com a menor pontuação: %s (%d pontos)\n", times[timemenor], menorpont);

}
