#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct livro{
        char nome[50];
        int ano;
    };

    int topo, limite=4, base=0, info, opt, valor;
    struct livro livros[5];

    topo=base-1;

    while(opt!=4){
        printf("\nDigite 1 para adicionar a pilha.");
        printf("\nDigite 2 para remover o topo da pilha.");
        printf("\nDigite 3 para vizulizar o topo da pilha.");
        printf("\nDigite 4 para encerrar o programa.\n");
        printf("\nDigite sua escolha: ");
        scanf("%d", &opt);

        if(opt==1){
            if(topo<limite){
            topo=topo+1;
            printf("Digite o nome do livro: ");
            scanf("%s", &livros[topo].nome);
            printf("Qual o ano do livro: ");
            scanf("%d", &livros[topo].ano);
            printf("\nSucesso a incer��o do nodo na piha!\n");
        }
        else
            printf("\nN�o � poss�vel a incer��o do nodo na pilha!\n");
        }

        if(opt==2){
            if(topo>=base){
                topo=topo-1;
                printf("\nRemo��o realizada com sucesso!\n");
            }
            else
                printf("\nImposs�vel realizar a remo��o!\n");
        }

        if(opt==3){
            if(topo>=base){
                printf("\n%s    --    ", livros[topo].nome);
                printf("%d\n", livros[topo].ano);
            }
            else
                printf("\nN�o � poss�vel a verifica��o por n�o existir nodo na pilha!\n");
        }

        if(opt==4)
            printf("\nObrigado pela utiliza��o do programa!\n");

    }

}
