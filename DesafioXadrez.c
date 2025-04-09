#include <stdio.h>

int main(){

    int torre = 1;
    int bispo = 1;

    printf("Movimentando a Torre\n");
    while (torre <= 5)
    {
        printf ("Direita\n");
        torre++;
    }
        printf ("A Torre parou na casa 1E\n\n");


    printf("Movimentando o Bispo\n");
    do
    {
        printf ("Direita, cima.\n");
        bispo++;
    } while (bispo <= 5);
        printf ("O Bispo parou na casa 6H\n\n");
        
    
    printf ("Movimentando a Rainha\n");
    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf ("Esqueda\n");
    }
        printf ("A Rainha parou na casa 3A\n\n");

    return 0;
}