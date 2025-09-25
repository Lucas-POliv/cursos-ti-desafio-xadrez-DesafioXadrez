#include <stdio.h>

int main (){

    int rainha = 1, bispo = 1;

    printf("Olá, seja bem vindo ao jogo de xadrez!\n");
    
    //Move a torre 5 casas para a direita.
    printf("\nMovimento Torre:\n");
    for(int torre = 1; torre <= 5; torre++) {
        printf("Direita %d\n", torre); //Imprime a direção do movimento.
    }

    //Move o bispo 5 casas na diagonal.
    printf("\nMovimento do bispo:\n");
    while (bispo <= 5) {
        printf("Cima, Direita %d\n", bispo);
        bispo++;
    }
    
    //Move a rainha 8 casas para esquerda.
    printf("\nMovimento da Rainha:\n");
    do{
        printf("Esquerda %d\n", rainha);
        rainha++;
    } while (rainha <= 8);

    //Move o cavalo em forma de "L".
    printf("\nMovimento cavalo\n");

    for(int cavalo = 1; cavalo < 3; cavalo++) //Loop externo: Faz sair duas casas para baixo
    {
        printf("Baixo %d\n", cavalo);

        int i = 0;
        while (cavalo == 2 && i < 1)//Executa só no segundo "baixo".
        {
            printf("Esquerda 1\n");
            i++;
        }  
    }
        
    return 0;
}