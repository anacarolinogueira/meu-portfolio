/*
Faça um programa que peça a razão e terceiro termo de uma PG (progressão geométrica). 
Peça um número inteiro positivo n (maior do que 3) e mostra os n primeiros termos e a soma dos n primeiros termos dessa PG
*/

#include <stdio.h>
#include <math.h>
int main () {
    int terceiro_termo, razao, i, quantidade, soma=0, primeiro_termo;
    printf("Me de o terceiro termo da PG: ");
    scanf("%d", &terceiro_termo);
    printf("Me de a razao da PG: "),
    scanf("%d", &razao);
    printf("Quantos numeros voce quer dessa PA?: ");
    scanf("%d", &quantidade);
    //encontrar o primeiro numero da pg
    primeiro_termo= terceiro_termo/(pow(razao,(3-1)));
    printf("Os primeiros termos da PG sao: ");
    for(i=1; i<= quantidade; i++){
        soma+=primeiro_termo;
        printf("%d ", primeiro_termo);
        primeiro_termo=primeiro_termo*razao;
        
    }
    printf("\nA soma dos priemiros termos da PG e = %d\n", soma);


    return 0;
}