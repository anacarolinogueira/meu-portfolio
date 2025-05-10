
/*
Faça um programa que, dados 3 números inteiros, mostre na tela esses números em ordem crescente.
*/
#include <stdio.h>
int main () {
    int a, b, c;
    int maior, medio, menor;
    printf("Me de o valor de a:");
    scanf("%d", &a);
    printf("Me de o valor de b:");
    scanf("%d", &b);
    printf("Me de o valor de c:");
    scanf("%d", &c);
        
        if (a>b && a>c)
        {
            maior = a;
            if (b>c)
            {
                medio = b;
                menor = c;
            }else 
            {
                medio = c;
                menor = b;
            }
        }else if (b>a && b>c)
        {
            maior = b;
            if (a>c){
                medio = a;
                menor = c;
            }else {
                medio = c;
                menor = a;
            }

        }else {
            maior = c; 
            if (b>a){
                medio = b;
                menor = a;
            }else {
                medio = a;
                menor =b;
            }
        }

        printf("Os numeros em ordem crescente sao %d %d %d", menor, medio, maior);


    return 0;
}