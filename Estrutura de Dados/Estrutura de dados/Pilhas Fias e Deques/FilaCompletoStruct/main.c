#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct jogo{
        char nome[50];
        int nota;
    };

    int LI=0, LS=4, IF, FF, opt;
    struct jogo jogos[5];

    IF=FF=LI-1;

    while(opt!=4){
        printf("\nDigite 1 para adicionoar a fila.");
        printf("\nDigite 2 para remover o nodo do in�cio da fila.");
        printf("\nDigite 3 para verificar o nodo do in�cio da lista.");
        printf("\nDigite 4 para encerrar o programa.");
        printf("\nDigite a op��o desejada: ");
        scanf("%d", &opt);

        if(opt==1){
            if((FF!=IF-1)&&((IF!=LI)||(FF!=LS))){
                if(IF==LI-1)
                    IF=FF=LI;
                    else if(FF==LS)
                        FF=LI;
                        else
                            FF=FF+1;
                    printf("\nDigite o nome do jogo: ");
                    scanf("%s", &jogos[FF].nome);
                    printf("\nDigite de 0 a 10 para a nota do jogo: ");
                    scanf("%d", &jogos[FF].nota);
                    printf("\nInser��o do nodo realizada com sucesso!\n");
            }
            else
                printf("\nImposs�vel a incer��o do nodo na lista!\n");
        }
        if(opt==2){
            if(IF!=LI-1){
                if(IF==FF)
                    IF=FF=LI-1;
                else if(IF==LS)
                    IF=LI;
                else
                    IF=IF+1;
            printf("\nRemo��o ocorrida com sucesso!\n");
            }
        else
            printf("\nImposs�vel realizar remo��o!\n");
        }
        if(opt==3){
            if(IF!=LI-1){
                printf("\n%s    --    ", jogos[IF].nome);
                printf("%d\n", jogos[IF].nota);
            }
            else
                printf("\nN�o existe um nodo na lista!\n");
        }
        if(opt==4)
            printf("\nObrigado pela utiliza��o do programa!\n");
    }
}
