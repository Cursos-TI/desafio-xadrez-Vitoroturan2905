#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
  
    int casa_bispo = 0;
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int casa_torre = 0;
    int casa_rainha = 0;

     //Movimento do bispo
     while (casa_bispo < bispo)
     {
         printf("BISPO: CIMA DIREITA \n");
         casa_bispo++;
     }
 
     //Movimento da torre
     do{
         printf("TORRE: DIREITA \n");
         casa_torre++;
     } while (casa_torre < torre);
 
 
     //Movimento da rainha
     for (int casa_rainha = 0; casa_rainha < rainha; casa_rainha++);
     {
         printf("RAINHA: ESQUERDA \n");
         casa_rainha++;
     }

    return 0;
}
