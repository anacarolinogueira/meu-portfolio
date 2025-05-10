/*
Faça um programa que peça um número inteiro positivo e mostra esse número no sistema binário.
*/

#include <stdio.h>

int main() 
{
    int numero;
    printf("Me de um numero: ");
    scanf("%d", &numero);
    
    while(numero < 0) 
    {
        printf("Esta errado! nao pode ser negativo.\n");
        printf("Me de um numero:\n");
        scanf("%d", &numero);
    }
    
    /*Se o número for maior que zero, então ele calcula normalmente
    mas caso seja zero, ele pula tudo e escreve só "00" na tela.
    */
    if(numero > 0)
    {
        /*
        Encontra a maior potência de 2 que não ultrapassa o número,
        para que o primeiro número exibido seja sempre 1
        */
        int potencia = 1;
        while(potencia <= numero) 
        {
            potencia = potencia * 2;
        }
        potencia = potencia / 2; // Volta uma potência pois ultrapassou

        int acumulado = 0;
        int soma_temp;
        
        while(potencia >= 1) 
        {
            soma_temp = acumulado + potencia;
            
            if(soma_temp <= numero) 
            {
                printf("1");
                acumulado = soma_temp; // Atualiza com valor já calculado
            } 
            else 
            {
                printf("0");
            }
            
            potencia = potencia / 2;
        }
    }
    else
    {
        printf("0");
    }
    
    return 0;
}