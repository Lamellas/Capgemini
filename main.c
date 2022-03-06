/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// algoritmo da questao 1 do desafio de programação da Capgemini.

void insert_sort(int vetor[], int tam){
  int troca;

  //Percorre todo o vetor
  for(int i = 1; i < tam; i++){
    int proximo = i;

    //Responsavel pelas trocas
    while((proximo != 0) && (vetor[proximo] < vetor[proximo - 1])){
      troca = vetor[proximo];
      vetor[proximo] = vetor[proximo - 1];
      vetor[proximo - 1] = troca;
      proximo--;
    }
  }
}


int main()
{
    int vetor[5] = {9, 2, 1, 4, 6};

   //Aplicando a ordenacao;
   insert_sort(vetor, 5);

   //Apresentando o vetor ordenado
   for(int i = 0; i < 5; i++){
	   printf("%d\n", vetor[i]);
   }
   
   
   // como o exemplo tem 5 numeros, a mediana será o item do meio, ou seja, o terceiro numero representado pelo vetor[2].
   
   printf("O numero que representa a mediana do vetor apos ordenacao eh: %d\n", vetor[2]);
   
   
    return 0;
}
