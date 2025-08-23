#include <stdio.h>

void main (){
    int n=1;
    int soma=0;

    printf ("%d\n", n);
    while(n!=0){
        printf ("Insira um número: ");
        scanf ("%d", &n);
        soma= soma + n;
    }
    printf("A soma dos números é: %d \n", soma);
}
