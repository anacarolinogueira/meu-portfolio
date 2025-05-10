/*
Faça um programa que peça um número inteiro e determine se esse número é um número primo. 
(Um número é primo se ele for divisível somente por ele mesmo e por 1).
*/

#include <stdio.h>
int main()
{
    int numero, resto, i, primo;
    printf("Me de um numero:");
    scanf("%d", &numero);
    while (numero < 0)
    {
        printf("Nao existe numero primo negativo!\nDigite um numero inteiro positivo:");
        scanf("%d", &numero);
    }
    for (i = 2; i <= (numero - 1); i++)
    {
        resto = numero % i;
        if (resto == 0)
        {
            primo = 0;
            i = numero;
        }
        else
        {
            primo = 1;
        }
    }
    if (primo == 0)
    {
        printf("%d nao e primo", numero);
    }
    else
    {
        printf("%d e primo", numero);
    }

    return 0;
}