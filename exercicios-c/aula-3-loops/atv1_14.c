/*
Faça um programa que peça um número inteiro para o usuário e mostra a tabuada desse número.
*/

#include <stdio.h>
int main () {
    int a, i;
    printf("Me fala um numero inteiro:");
    scanf("%d", &a);
    
        for(i=1; i <=10; i++){
        printf("%dx%d=%d\n", a, i, a*i);
        }

    return 0;
}