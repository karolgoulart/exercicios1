#include <stdio.h>

void main (){
    int n=1;
    int i;
    int soma=0;

    printf("Insira um número: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        soma= soma + i*i;
    }
    printf("A soma é: %d \n", soma);
}
