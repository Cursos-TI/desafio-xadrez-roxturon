#include <stdio.h>

void Torre(int casasTorre){

    if (casasTorre>0)
    {
        printf("Direita.\n");
        Torre(casasTorre-1);
    }   
}

void Rainha(int casasRainha){

    if (casasRainha>0)
    {
        printf("Esquerda.\n");
        Rainha(casasRainha-1);
    }
}

void Bispo(int casasBispo){

    if (casasBispo>0)
    {
        printf("Cima.\n");
        printf("Direita.\n");
        Bispo(casasBispo-1);
    }
}

void Cavalo(int casasCavalo){
    
    if (casasCavalo>0 )
    {
        printf("Cima.\n");
        Cavalo(casasCavalo-1);
        
    }else{
        printf("Direita.\n");   
    
    }
}


int main(){
    Torre(5);
    printf("\n");
    Rainha(8);
    printf("\n");
    Bispo(5);
    printf("\n");
    Cavalo(2);
    printf("\n");


    return 0;
}