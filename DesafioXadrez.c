#include <stdio.h>

void torre (int num1)                             // Função que move a Torre - se move em linha reta (horizontal/vertical)
{
    if (num1 > 0)                                 // Condição de parada da recursão
    {
        printf ("Direita \n");                    // Impressão do movimento horizontal
        torre (num1 - 1);                         // Chamada recursiva com 1 movimento a menos
    }
    
}

void bispo (int num2)                             // Função que move o Bispo - se move na diagonal
{
    if (num2 > 0)                                 
    {
        printf ("Direita, Cima \n");
        bispo (num2 - 1);
    }
}

void rainha (int num3)                             // Função que move a Rainha - combina movimento da Torre e Bispo (aqui só horizontal)
{
    if (num3 > 0)
    {
        printf ("Esquerda \n");
        rainha (num3 - 1);
    }
}


int main (){

    int movimento_torre = 5;
    int movimento_bispo = 5;                       // Quantidade de movimentos para cada peça
    int movimento_rainha = 8;

    printf ("Movendo a Torre... \n\n");            // Simula movimento da Torre
    torre (movimento_torre);                       // Chama a função recursiva

    printf ("A Torre foi movida para a casa E1\n\n");    // Posição final

    printf ("Movendo o Bispo... \n\n");            // Simula movimento do Bispo
    bispo (movimento_bispo);                       // Chama a função recursiva

    printf ("O Bispo foi movido para a casa H6\n\n");    // Posição final

    printf ("Movendo a Rainha... \n\n");           // Simula movimento da Rainha
    rainha(movimento_rainha);                      // Chama a função recursiva

    printf ("A Rainha foi movida para a casa A3\n\n");   // Posição final


    // Simula movimento do Cavalo (em L: 2 para baixo, 1 para esquerda)
    for (
        int cima = 0, direita = 0;                                // Inicializa contadores
        cima++ < 2 ? (printf ("Cima\n"), 1) :                     // Executa 2x "Baixo"            
        direita++ < 1 ? (printf ("Direita\n"), 1) : 0 ;           // Depois 1x "Esquerda"
        ){}

    printf ("O Cavalo foi Movido para a casa C3\n\n");              // Posição final

    return 0;
}