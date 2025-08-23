#include <stdio.h>

void main (void){
    int n1;
    int n2;

    printf("Insira um número: ");
    scanf("%d", &n1);
    printf("Insira outro número: ");
    scanf ("%d", &n2);

    if(n1<n2){
        printf("O %d é o maior número.\n", n2);
    }
    else{
        printf("O %d é o maior número.\n", n1);
    }
}
