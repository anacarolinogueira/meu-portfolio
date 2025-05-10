/*	
Faça um programa que peça números inteiros ao usuário e calcula a média dos valores digitados. 
O programa deverá parar quando o usuário digitar um número negativo (que não deverá ser incluído no cálculo).
*/

#include <stdio.h>
int main () {
   int numero, quantidade=0, soma=0;
   int media;
      do {
    printf("Me de um numero: ");
    scanf("%d", &numero);
    if (numero>0){
    soma+= numero;
    quantidade ++ ;
    }
 }while(numero>0);
  media = soma / quantidade;
  printf("A media dos numeros e %d", media);


    return 0;
}
