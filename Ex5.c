/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.*/


#include <stdio.h>
    int main(void){

    printf("Universidade Federal do Parana\n");
    printf("TADS\n");
    printf("Estrutura de Dados 1\n");
    printf("Marcelo Batista da Luz Junior - GRR 20211591\n");
    printf("Exercicio 05\n\n");

/*----------------------------------------------------------------------*/
    int vet[5], cont = 1;

    for(cont = 1; cont <= 5; cont++)
    {
      scanf("\n%d", &vet[cont]);
    }


   for(cont = 1; cont<=5; cont++){
    if(vet[cont]%2==0){
        printf("\n\n%p", &vet[cont]);
    }
    else{
        printf("\n\nCondicao nao satisfeita\n");
    }
   }




return 0;
}
