/*
Faça um programa que pede o primeiro nome do usuário e um sobrenome e mostra os dois nomes digitados na tela
*/

#include <stdio.h>
int main () {
    char nome[50]; //utilizando a variavel char
    char sobrenome[50];
    printf("Me diga seu primeiro nome:");
    scanf("%49s", nome);
    printf("Agora seu sobrenome:");
    scanf("%49s", sobrenome);
    printf("%s %s\n", nome, sobrenome);

    

    return 0;
}