#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Criado função recursiva torre.
void recursivoTorre(int n)
{   
    if (n > 0)
    {
        printf("DIREITA ->\n");
        recursivoTorre(n - 1);
    }
}

//Criado função recursiva bispo.
void recursivoBispo(int n)
{
    if(n > 0)
    {
        printf("Cima, Direita\n");
        recursivoBispo( n - 1);
    }
}

//Criado função recursiva Rainha.
void recursivoRainha(int n)
{
    if (n > 0)
    {
        printf("Esquerda <-\n");
        recursivoRainha(n - 1);
    }
}
int main() {    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //utilizado a função recursiva para loop, ao invés de while, do while e for.
     int movimentot, movimentob, movimentor, movimentoc;

    printf("TORRE\n");
    movimentot = 5;
    recursivoTorre(movimentot);
    
    printf("Bispo\n");
    movimentob = 5;
    recursivoBispo(movimentob);

    movimentor = 8;
    printf("RAINHA\n");
    recursivoRainha(movimentor);
    
    

  // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    printf("CAVALO\n");
    for(int i = 2, j = 1; i > 0; i--, j--)
    {
    
        if (i <= 2){
            printf("CIMA\n");
        
        }
        if (j == 0){
            printf("DIREITA\n");
        }
    }
  /*  printf("CAVALO\n");
    movimentoc = 1;
    while (movimentoc == 1)
    {   
        for(int i = 0; i < 2; i++){
            printf("Baixo\n");
        }
        printf("Esquerda");
        movimentoc--;
    }
  */

    

    return 0;
}
