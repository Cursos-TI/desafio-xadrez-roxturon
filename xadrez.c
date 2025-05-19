#include <stdio.h>

int main(){

    // Declaração de variantes para While e Do
    int torre=0, rainha=0;

    printf("\n");
    //While para representar movimento da torre, indicando até um valor de 5 repetições.
    while (torre <5)
    {
        printf("Torre: Direita.\n");
        torre++;
    }
    printf("\n");

    //Do para representar movimento da Rainha, indicando até um valor de 8 repetições.
    do
    {
        rainha++;
        printf("Rainha: esquerda.\n");
    } while (rainha<8);
    printf("\n");
    
    //For para representar movimento do Bispo, indicando até um valor de 5 repetições e imprimindo duas direções para cada repetição.
    for (int bispo = 0; bispo < 5; bispo++)
    {
        printf("Bispo: Cima.\n");
        printf("Bispo: Direita.\n");
    }
    

    return 0;
}