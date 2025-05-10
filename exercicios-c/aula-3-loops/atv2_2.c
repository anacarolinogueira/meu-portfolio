/*
Faça um programa que peça números inteiros ao usuário e conta quantos números positivos e quantos números negativos foram digitados. 
O programa deverá parar quando o número zero for digitado, mostrando a tela os resultados.
*/

#include <stdio.h>
int main () {
    int numero, positivo=0, negativo=0;
    do {

        printf("me diga um numero:");
        scanf("%d", &numero);
        if (numero>0){
            positivo++;
        }if (numero<0){
            negativo++;
        }
        

    }while (numero !=0);

    printf("Numero de negativos: %d\n", negativo);
    printf("Numero de positivos: %d\n", positivo);
    return 0;

}